#include "factory.h"
#include "exceptions.h"
#include <cstring>

unsigned Factory::addMachine(Machine* m){
    machines.insert({1,m});
    return 1;
}

Machine* Factory::getMachine(unsigned id){
    if(machines.find(id) != machines.end()){
        //nachschauen ob der key bereits existiert
        return machines[id];
    }else{
        //exception tbd
    }
}

void Factory::deleteMachine(unsigned id){
    if (machines.find(id) != machines.end()){//wenn der slot gefunden wurde
        machines.erase(id); //Maschine wird gelöscht
    }else{
        //exception tbd
    }
}

void Factory::addProduct(Product* p){
    /*Übergibt ein neues Produkt der Fabrik.
     * Die Fabrik muss dann den Typ des Produkts bestimmen und in das entsprechende Lager einsortieren.
     * Wenn ein unbekanntes Produkt übergeben wird, dann soll eine MachineFailureException geworfen werden.*/
    if(p->getType() == 1){
        string a = reinterpret_cast<const char *>(p);
        aProducts.insert({a, p});
        //Produkt in das passende Lager sortieren
    }else if(p->getType() == 2){
        //Produkt in das passende Lager sortieren
    }else{
        throw MachineFailureException("Unbekanntes Produkt.");
    }
}

unsigned Factory::getProductACount(){
    //Gibt die Anzahl der im Lager vorhandenen Produkte A zurück.
    unsigned size = aProducts.size();
    return size;
}

unsigned Factory::getProductBCount(){
    //Gibt die Anzahl der im Lager vorhandenen Produkte A zurück.
    unsigned size = bProducts.size();
    return size;
}

void run(unsigned iterations){
    //Diese Methode implementiert die Zeitschleife.
    // Der Eingabeparameter iterations gibt an, nach wievielen Iterationen
    // die Zeitschleife abgebrochen werden soll
    // (0 bedeutet, dass die Schleife nie abgebrochen wird).
}
