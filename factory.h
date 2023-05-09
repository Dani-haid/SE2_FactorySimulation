#ifndef INC_02_SE2_FACTORYSIMULATION_FACTORY_H
#define INC_02_SE2_FACTORYSIMULATION_FACTORY_H

#include <map>
#include <vector>
#include "machine.h"
#include "product_a.h"
#include "product_b.h"

class Factory {
protected:
    map<int, Machine*> machines;
    vector<Product*> storageProductsA;
    vector<Product*> storageProductsB;

    int machineID = 0;

public:
    unsigned addMachine(Machine* m);
    Machine* getMachine(unsigned id);
    void deleteMachine(unsigned id);
    void addProduct(Product* p);
    unsigned getProductACount();
    unsigned getProductBCount();
    void run(unsigned iterations);
};


#endif //INC_02_SE2_FACTORYSIMULATION_FACTORY_H
