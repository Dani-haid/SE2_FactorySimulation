#ifndef INC_02_SE2_FACTORYSIMULATION_PRODUCT_B_H
#define INC_02_SE2_FACTORYSIMULATION_PRODUCT_B_H

#include "product.h"

class ProductB: public Product{
private:
    //constructor
    using Product::Product;

public:
    virtual int getType() override;
};


#endif //INC_02_SE2_FACTORYSIMULATION_PRODUCT_B_H
