#include "factory.h"
#include "exceptions.h"
#include "machine_a.h"
#include "machine_b.h"
#include <cstring>
#include <vector>
#include <unistd.h>

using namespace std;

unsigned Factory::addMachine(Machine* m){
    int tempID = machineID++;
    machines.insert({tempID,shared_ptr<Machine>(m)});
    m->setFactory(this);
    return tempID;
}

Machine* Factory::getMachine(unsigned id){
    //oder mit machines.at(id) (at checkt ob es den key gibt ansonsten wirft er exception)
    if(machines.find(id) != machines.end()){
        //nachschauen ob der key bereits existiert
        return machines[id].get(); //.get() gibt raw pointer von smart pointer retour
    }else{
        throw NoMachineFoundException("Keine Maschine mit dieser ID vorhanden.");
    }
}

void Factory::deleteMachine(unsigned id){
    if (machines.find(id) != machines.end()){//wenn der slot gefunden wurde
        cout << "Maschine mit folgender ID wurde gelöscht: " << id <<endl;
        machines.erase(id); //Maschine wird gelöscht
    }else{
        throw NoMachineFoundException("Keine Maschine mit dieser ID vorhanden.");
    }
}

void Factory::addProduct(Product* p){
    if(p->getType() == 1){
        //Produkt in das passende Lager sortieren
        //fall vector einen Pointer von ProductA* erwartet - downcast machen wie folgt:
        //ProductA* pa = (ProductA*)p;
        storageProductsA.push_back(shared_ptr<Product>(p));
        getProductACount();

    }else if(p->getType() == 2){
        //Produkt in das passende Lager sortieren
        storageProductsB.push_back(shared_ptr<Product>(p));
        getProductBCount();
    }else{
        throw MachineFailureException("Unbekanntes Produkt.");
    }
}

unsigned Factory::getProductACount(){
    //Gibt die Anzahl der im Lager vorhandenen Produkte A zurück.
    unsigned size = storageProductsA.size();
    cout << "Größe von Lager A beträgt: " << size << endl;
    return size;
}

unsigned Factory::getProductBCount(){
    //Gibt die Anzahl der im Lager vorhandenen Produkte B zurück.
    unsigned size = storageProductsB.size();
    cout << "Größe von Lager B beträgt: " << size << endl;
    return size;
}

void Factory::run(unsigned iterations){
    unsigned int i = 1;
    //int tempcount = 0;
    while(iterations >= 0){
        //cout << "iterations: " << iterations << endl;
        unsigned tempId = 0;
    try{
        for(auto m = machines.begin(); m != machines.end(); m++){
            try{
                tempId = m->first;
                m->second->tick();
            } catch (MachineFailureException& e){
                cout << e.what() << endl;
            }catch(UnknownProductException& e){
                cout << e.what() << endl;
            }
        }
    } catch (MachineExplosionException& e){
        cout << e.what() << endl;
        deleteMachine(tempId);
    }
    //Achtung Stolperfalle: wo try ... catches sind (auf welcher Ebene)

        //andere Variante um durch map zu iterieren:
        /*for(auto m : machines){
        try{
            tempId = m.first;
            m.second->tick();
        }catch(){}...*/

        cout << "-----" << endl;


        if(iterations == i){
            break;
        }/*else if(iterations == 0){
            cout << "tempcount: " << tempcount << endl;
            if(tempcount >= 10){ //sicherheitsabbruch
                break;
            }
            tempcount ++;
            continue;
        }*/
        iterations--;
        sleep(2);//sleep for 2 seconds
    }

}
