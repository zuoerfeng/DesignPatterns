#include "receiver.h"

class Command
{
public:
    virtual void execute()=0;
};

class ConcreteCommand: public Command
{
public:
    ConcreteCommand(receiver * pReceiver);
    ~ConcreteCommand();
    void execute();

private:
    receiver* m_pReceiver;

};



