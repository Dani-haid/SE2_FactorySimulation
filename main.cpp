#include <iostream>
#include "product_a.h"
#include "product_b.h"
#include "machine_a.h"
#include "machine_b.h"
#include "factory.h"
#include <ctime>

using namespace std;

int main() {
    //srand(time(nullptr));//Damit random Number immer unterschiedlich ist --> in main (braucht ctime)

    Factory meineFabrik;
    //meineFabrik.run(0);
    meineFabrik.run(2);

    /*ProductA product_a2(1);
    cout << "Type von Produkt A: " << product_a2.getType() << endl;

    shared_ptr<ProductA> product_a1 = make_shared<ProductA>(1);
    cout << "Type von Produkt A: " << product_a1->getType() << endl;

    shared_ptr<ProductB> product_b1 = make_shared<ProductB>(2);
    cout << "Type von Produkt B: " << product_b1->getType() << endl;*/

    /*Factory* fabrik1;
    auto machine_a1 = make_shared<MachineA>(fabrik1);
    machine_a1->setFactory(fabrik1);
    machine_a1->tick();

    shared_ptr<MachineB> machine_b1 = make_shared<MachineB>(fabrik1);
    machine_b1->tick();*/

    return 0;
}
