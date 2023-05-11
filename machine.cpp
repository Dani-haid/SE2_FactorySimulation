#include "machine.h"
#include "product_a.h"
#include "product_b.h"
#include "factory.h"

bool Machine::checkMachineFailure(){
    if(failureIndex > 0){
        failureIndex--;
        return false;
    }
    return true;
};

void Machine::createProduct(int type){
    //cout << "neues produkt erzeugen" << endl;
    if(type == 1){
        cout << "Neues Produkt von Maschine A erzeugen." << endl;
        parent->addProduct(new ProductA());
    }else if(type == 2){
        cout << "Neues Produkt von Maschine B erzeugen." << endl;
        parent->addProduct(new ProductB());
    }
}

void Machine::setFactory(Factory* f){
        this->parent = f;
}
