#ifndef INC_02_SE2_FACTORYSIMULATION_MACHINE_H
#define INC_02_SE2_FACTORYSIMULATION_MACHINE_H

#include <iostream>
using namespace std;

//forward declaration
class Factory;

class Machine {
protected:

    //using default constructor

    //destructor
    ~Machine(){
        cout << "Destructor Machine " << endl;
    };

public:
    virtual void tick() = 0;

    void setFactory(Factory* f);

    void createProduct();
};


#endif //INC_02_SE2_FACTORYSIMULATION_MACHINE_H
