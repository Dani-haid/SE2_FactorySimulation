#ifndef INC_02_SE2_FACTORYSIMULATION_PRODUCT_B_H
#define INC_02_SE2_FACTORYSIMULATION_PRODUCT_B_H

#include "product.h"

class ProductB: public Product{
private:
    int type;

public:
    //constructor
    ProductB(){
        this->type = 1;
    };

    //destructor
    virtual ~ProductB(){
        cout << "Destructor ProductB" << endl;
    };

    virtual int getType() override;
};


#endif //INC_02_SE2_FACTORYSIMULATION_PRODUCT_B_H
