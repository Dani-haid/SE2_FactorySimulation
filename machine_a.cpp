#include "machine_a.h"
#include <cstdlib>
#include "product_a.h"
#include "exceptions.h"

void MachineA::tick() {
    cout << "in Tick function von Maschine A" << endl;

    if(!checkMachineFailure()){//wenn failureIndex > 0 ist wird funktion abgebrochen
        cout << "Diese Maschine kann aktuell keine Produkte erzeugen." << endl;
        return;
    }

        int x = 1, y = 100;
        int rand_num = rand()%((y+1)-x) + x; //Zufallszahl zwischen x und y
        //int rand_num = 7;//for testing
        //cout << rand_num << endl;

        if (rand_num > 0 && rand_num <= 15){
            //MachineFailureException
            this->setFailureIndex(3);
            throw MachineFailureException("Maschinenfehler!");
        }else if(rand_num > 15 && rand_num <= 17) {
            //MachineExplosionException
            throw MachineExplosionException("Maschine Typ A Explodiert");
        }else{
            if(parent){ //check ob Pointer von factory gültig ist
                for(int i = 0; i < 2; i++) {
                    createProduct(1);
                }
            }
        }

}
