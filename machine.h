#ifndef INC_02_SE2_FACTORYSIMULATION_MACHINE_H
#define INC_02_SE2_FACTORYSIMULATION_MACHINE_H

#include <iostream>
using namespace std;

//forward declaration
class Factory;
class Product;

class Machine {
protected:
    Factory* parent;
    int failureIndex = 0;

public:
    //using default constructor
    //constructor
    Machine(Factory* parent) : parent(parent){};


    //destructor
    ~Machine(){
        cout << "Destructor Machine " << endl;
    };

    virtual void tick() = 0;

    void setFactory(Factory* f);

    void createProduct(int type);

    int getFailureIndex() const {
        return failureIndex;
    }

    void setFailureIndex(int failureIndex) {
        this->failureIndex = failureIndex;
    }
};


#endif //INC_02_SE2_FACTORYSIMULATION_MACHINE_H
