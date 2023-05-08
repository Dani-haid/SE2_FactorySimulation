#ifndef INC_02_SE2_FACTORYSIMULATION_MACHINE_A_H
#define INC_02_SE2_FACTORYSIMULATION_MACHINE_A_H

#include "machine.h"

class MachineA : public Machine{
private:
    //constructor
using Machine::Machine;

public:
    virtual void tick() override;
};


#endif //INC_02_SE2_FACTORYSIMULATION_MACHINE_A_H
