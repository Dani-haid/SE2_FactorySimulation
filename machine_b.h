#ifndef INC_02_SE2_FACTORYSIMULATION_MACHINE_B_H
#define INC_02_SE2_FACTORYSIMULATION_MACHINE_B_H

#include "machine.h"

class MachineB : public Machine{

public:
    //constructor
    using Machine::Machine;

    //destructor
    virtual ~MachineB(){
        cout << "Destructor MachineB" << endl;
    };

    virtual void tick() override;
};


#endif //INC_02_SE2_FACTORYSIMULATION_MACHINE_B_H
