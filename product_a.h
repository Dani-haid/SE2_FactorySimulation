#ifndef INC_02_SE2_FACTORYSIMULATION_PRODUCT_A_H
#define INC_02_SE2_FACTORYSIMULATION_PRODUCT_A_H

#include "product.h"

class ProductA : public Product{
private:
    int type;

public:
    //constructor
    ProductA(){
        this->type = 1;
    };

    //destructor
    virtual ~ProductA(){
        cout << "Destructor ProductA" << endl;
    };

    virtual int getType() override;
};


#endif //INC_02_SE2_FACTORYSIMULATION_PRODUCT_A_H
