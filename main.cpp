#include <iostream>
#include "product_a.h"
#include "product_b.h"
#include "machine_a.h"
#include "machine_b.h"
#include "factory.h"
#include <ctime>

using namespace std;

int main() {
    srand(time(nullptr));//Damit random Number immer unterschiedlich ist --> in main (braucht ctime)

    Factory meineFabrik;
    //meineFabrik.run(0);
    meineFabrik.run(2);

    return 0;
}
