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
    ~Factory(){
        cout << "Destructor Factory" << endl;

       /* cout << storageProductsA.size() << endl;

for(int i = 0; i < storageProductsA.size(); i++){
    cout << storageProductsA.size() << endl;
    storageProductsA.erase(storageProductsA.begin()+0);
    std::cout << i << ", ";
}


        for(auto it = machines.begin(); it != machines.end(); it++){
            deleteMachine(it->first);
        }*/


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
