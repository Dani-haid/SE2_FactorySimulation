#include "machine_b.h"
#include "exceptions.h"

void MachineB:: tick(){
    cout << "in Tick function von Maschine B" << endl;
    int tempFailer = getFailureIndex();
    //cout << "tempFailer aktuell: " << tempFailer << endl;
    if(tempFailer == 0){
        int x = 1, y = 100;
        //int rand_num = rand()%((y+1)-x) + x; //Zufallszahl zwischen x und y
        int rand_num = 30;//for testing
        //cout << rand_num << endl;

        if (rand_num > 0 && rand_num <= 20){
            //MachineFailureException
            this->setFailureIndex(3);
            throw MachineFailureException("Maschinenfehler!");
        }else if(rand_num > 20 && rand_num <= 25) {
            //MachineExplosionException
            throw MachineExplosionException("Maschine Typ B Explodiert");
        }else{
            for(int i = 0; i < 3; i++) {
                createProduct(2);
            }
        }

    }else{
        tempFailer--;
        this->setFailureIndex(tempFailer);
        cout << "Diese Maschine kann aktuell keine Produkte erzeugen." << endl;
    }
}
