#include "machine.h"
#include "product_a.h"

void Machine::createProduct(){
    cout << "neues produkt erzeugen" << endl;
    shared_ptr<ProductA> product_a3 = make_shared<ProductA>();
    cout << "Produkt aus createProduct: " << product_a3->getType() << endl;
}
