#include "Invoker.h"

Invoker::Invoker(){
}

Invoker::~Invoker(){
}

void Invoker::setcommand(Command* pCommand)
{
    m_pCommand = pCommand;
}

void Invoker::call(){
    m_pCommand->execute();
}
