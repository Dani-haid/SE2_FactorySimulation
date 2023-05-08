#include <iostream>
#include "product_a.h"
#include "product_b.h"
#include "machine_a.h"
#include "machine_b.h"

using namespace std;

int main() {
    shared_ptr<ProductA> product_a1 = make_shared<ProductA>();
    cout << "Type von Produkt A: " << product_a1->getType() << endl;

    shared_ptr<ProductB> product_b1 = make_shared<ProductB>();
    cout << "Type von Produkt B: " << product_b1->getType() << endl;

    shared_ptr<MachineA> machine_a1 = make_shared<MachineA>();
    machine_a1->tick();

    shared_ptr<MachineB> machine_b1 = make_shared<MachineB>();
    machine_b1->tick();

    return 0;
}
