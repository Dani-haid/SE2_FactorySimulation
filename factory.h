#ifndef INC_02_SE2_FACTORYSIMULATION_FACTORY_H
#define INC_02_SE2_FACTORYSIMULATION_FACTORY_H

#include <map>
#include "machine.h"
#include "product_a.h"
#include "product_b.h"

class Factory {
protected:
    map<unsigned , Machine*> machines;
    map<string, Product*> aProducts;
    map<int, shared_ptr<ProductB>> bProducts;
public:
    unsigned addMachine(Machine* m); //Fügt eine neuen Maschine hinzu. Der Rückgabewert ist eine ID,
    // die die jeweilige Maschine eindeutig identifiziert.
    Machine* getMachine(unsigned id);//Gibt die Maschine mit der angegebenen ID zurück.
    void deleteMachine(unsigned id);
    void addProduct(Product* p);
    unsigned getProductACount();
    unsigned getProductBCount();
    void run(unsigned iterations);

};


#endif //INC_02_SE2_FACTORYSIMULATION_FACTORY_H
