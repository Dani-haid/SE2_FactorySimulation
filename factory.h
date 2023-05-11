#ifndef INC_02_SE2_FACTORYSIMULATION_FACTORY_H
#define INC_02_SE2_FACTORYSIMULATION_FACTORY_H

#include <map>
#include <vector>
#include "machine.h"
#include "product_a.h"
#include "product_b.h"
#include <memory>


class Factory {
protected:
    map<int, shared_ptr<Machine>> machines;
    vector<shared_ptr<Product>> storageProductsA;
    vector<shared_ptr<Product>> storageProductsB;

    int machineID = 0;

public:
    //destructor
    ~Factory(){
        cout << "Destructor Factory" << endl;
    };

    unsigned addMachine(Machine* m);
    Machine* getMachine(unsigned id);
    void deleteMachine(unsigned id);
    void addProduct(Product* p);
    unsigned getProductACount();
    unsigned getProductBCount();
    void run(unsigned iterations);
};


#endif //INC_02_SE2_FACTORYSIMULATION_FACTORY_H
