#include <iostream>
#include "product_a.h"
#include "product_b.h"

using namespace std;

int main() {
    shared_ptr<ProductA> product_a1 = make_shared<ProductA>();
    cout << "Type von Produkt A: " << product_a1->getType() << endl;

    shared_ptr<ProductB> product_b1 = make_shared<ProductB>();
    cout << "Type von Produkt B: " << product_b1->getType() << endl;

    return 0;
}
