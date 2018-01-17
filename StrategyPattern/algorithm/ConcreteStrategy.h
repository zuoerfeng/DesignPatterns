#include "Strategy.h"


class ConcreteStrategyA : public Strategy
{

public:
	ConcreteStrategyA();
	virtual ~ConcreteStrategyA();

	virtual void algorithm();

};


class ConcreteStrategyB : public Strategy
{

public:
	ConcreteStrategyB();
	virtual ~ConcreteStrategyB();

	virtual void algorithm();

};
