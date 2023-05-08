#ifndef INC_02_SE2_FACTORYSIMULATION_PRODUCT_H
#define INC_02_SE2_FACTORYSIMULATION_PRODUCT_H

//#include <cstring>
#include <string>
#include <iostream>

using namespace std;

class Product {
protected:
    //string name;
    //int type;

public:
    //constructor
    //Product(const string& name, int type):name(name), type(type){};

    //destructor
    ~Product(){
        cout << "destructor product.h" << endl;
    };

    virtual int getType()=0;

    /*const string &getName() const {
        return name;
    }

    void setName(const string &name) {
        this->name = name;
    }*/
};


#endif //INC_02_SE2_FACTORYSIMULATION_PRODUCT_H
