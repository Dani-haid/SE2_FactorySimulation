#ifndef INC_02_SE2_FACTORYSIMULATION_EXCEPTIONS_H
#define INC_02_SE2_FACTORYSIMULATION_EXCEPTIONS_H

#include <stdexcept>

using namespace std;

/*
 * mit std::exception und what() überschrieben
class FactoryException: public exception{
public:
    const char* what() const noexcept override {
        return "Some error message";
    }
};

class MachineFailureException:public FactoryException{
public:
    using FactoryException::FactoryException;

    const char* what() const noexcept override {
        return "sfjkalsdjlfa";
    }
};*/

//**mit std::runtime_error

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
