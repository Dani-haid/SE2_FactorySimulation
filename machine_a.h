#ifndef INC_02_SE2_FACTORYSIMULATION_MACHINE_A_H
#define INC_02_SE2_FACTORYSIMULATION_MACHINE_A_H

#include "machine.h"

class MachineA : public Machine{
public:
    //constructor
    using Machine::Machine;
    //MachineA(Factory* parent) : Machine(parent){};//brauchen wir nicht durch setFactory funktion

    //destructor
    virtual ~MachineA(){
        cout << "Destructor MachineA" << endl;
    };

    virtual void tick() override;
};


#endif //INC_02_SE2_FACTORYSIMULATION_MACHINE_A_H
