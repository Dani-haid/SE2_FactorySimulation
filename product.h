#ifndef INC_02_SE2_FACTORYSIMULATION_PRODUCT_H
#define INC_02_SE2_FACTORYSIMULATION_PRODUCT_H

#include <string>
#include <iostream>

using namespace std;

class Product {
protected:

public:
    //destructor
    ~Product(){
        cout << "destructor product.h" << endl;
    };

    virtual int getType()=0;
};


#endif //INC_02_SE2_FACTORYSIMULATION_PRODUCT_H
