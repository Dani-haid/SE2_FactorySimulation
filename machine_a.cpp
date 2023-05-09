#include "machine_a.h"
#include <cstdlib>
#include "product_a.h"
#include "exceptions.h"

void MachineA::tick() {
    cout << "Produkt von Maschine A erzeugen." << endl;
    int x = 1, y = 100;
    //int rand_num = rand()%((y+1)-x) + x; //Zufallszahl zwischen x und y
    int rand_num = 20;//for testing

    if (rand_num > 0 && rand_num <= 15){
        //MachineFailureException
        //tbd
        throw MachineFailureException("Maschinenfehler!");
    }else if(rand_num > 15 && rand_num <= 17) {
        //MachineExplosionException
        //tbd
        throw MachineExplosionException("Maschine Explodiert");
    }else{
        for(int i = 0; i <= 2; i++) {
            //ProductA testproduct1;//ist nur kopie
            createProduct(1);
        }
    }

    cout << rand_num << endl;
}
