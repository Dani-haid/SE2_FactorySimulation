#include "machine.h"
#include "product_a.h"
#include "product_b.h"
#include "factory.h"

void Machine::createProduct(int type){
    cout << "neues produkt erzeugen" << endl;
    if(type == 1){
        parent->addProduct(new ProductA());
        cout << "Neues Produkt von Produkt A wurde erzeugt." << endl;
    }else if(type == 2){
        parent->addProduct(new ProductB());
        cout << "Neues Produkt von Produkt B wurde erzeugt." << endl;
    }
}

void Machine::setFactory(Factory* f){
        this->parent = f;
}
