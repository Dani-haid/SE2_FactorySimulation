#include "factory.h"
#include "exceptions.h"
#include "machine_a.h"
#include "machine_b.h"
#include <cstring>
#include <vector>
#include <unistd.h>

unsigned Factory::addMachine(Machine* m){
    int tempID = machineID;
    machines.insert({machineID++,m});
    return tempID;
}

Machine* Factory::getMachine(unsigned id){
    if(machines.find(id) != machines.end()){
        //nachschauen ob der key bereits existiert
        return machines[id];
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
        storageProductsA.push_back(p);
        getProductACount();

    }else if(p->getType() == 2){
        //Produkt in das passende Lager sortieren
        storageProductsB.push_back(p);
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
    MachineA maschine1;
    addMachine(&maschine1);
    maschine1.setFactory(this);

    MachineB maschine2;
    addMachine(&maschine2);
    maschine2.setFactory(this);


    int i = 1;
    int tempcount = 0;
    while(1){
        cout << "iterations: " << iterations << endl;

        //map durch iterieren
        for (auto it = machines.begin(); it != machines.end(); it++){
            try{
                it->second->tick();
            }
            catch (MachineFailureException& e){
                cout << e.what() << endl;
            }
            catch (MachineExplosionException& e){
                cout << e.what() << endl;
                deleteMachine(it->first);
            }
        }
        cout << "-----" << endl;


        if(iterations == i){
            break;
        }else if(iterations == 0){
            cout << "tempcount: " << tempcount << endl;
            if(tempcount >= 10){
                break;
            }
            tempcount ++;
            continue;
        }
        iterations--;
        sleep(2);//sleep for 2 seconds
    }

}
