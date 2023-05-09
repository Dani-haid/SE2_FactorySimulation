#ifndef INC_02_SE2_FACTORYSIMULATION_EXCEPTIONS_H
#define INC_02_SE2_FACTORYSIMULATION_EXCEPTIONS_H

#include <stdexcept>

using namespace std;

class FactoryException: public runtime_error{
public:
    using runtime_error::runtime_error;
};

class MachineFailureException:public FactoryException{
    using FactoryException::FactoryException;
};

class MachineExplosionException:public FactoryException{
    using FactoryException::FactoryException;
};

class NoMachineFoundException:public FactoryException{
    using FactoryException::FactoryException;
};


#endif //INC_02_SE2_FACTORYSIMULATION_EXCEPTIONS_H
