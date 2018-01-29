#include <iostream>
#include "command.h"

using namespace std;

ConcreteCommand::ConcreteCommand(receiver* pReceiver){
    this->m_pReceiver = pReceiver;
}

ConcreteCommand::~ConcreteCommand(){

}

void ConcreteCommand::execute(){
	cout << "ConcreteCommand::execute"  << endl;
	m_pReceiver->action();
}
