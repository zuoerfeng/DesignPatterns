#include "ConcreteStrategy.h"
#include <iostream>
using namespace std;

ConcreteStrategyA::ConcreteStrategyA(){

}

ConcreteStrategyA::~ConcreteStrategyA(){

}

void ConcreteStrategyA::algorithm(){
	cout << "use algorithm A" << endl;
}


ConcreteStrategyB::ConcreteStrategyB(){

}

ConcreteStrategyB::~ConcreteStrategyB(){

}

void ConcreteStrategyB::algorithm(){
	cout << "use algorithm B" << endl;
}
