#ifndef INC_02_SE2_FACTORYSIMULATION_PRODUCT_H
#define INC_02_SE2_FACTORYSIMULATION_PRODUCT_H

#include <iostream>

using namespace std;

class Product {
public:
    //destructor virtual
    virtual ~Product(){};

    virtual int getType()=0;
};


#endif //INC_02_SE2_FACTORYSIMULATION_PRODUCT_H
