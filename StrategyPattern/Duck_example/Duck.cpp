#include "Duck.h"
#include<iostream>

void FlyWithWings::fly()
{
    std::cout<<"I'm flying"<<std::endl;
}

void FlyNoWay::fly()
{
    std::cout<<"I can't fly"<<std::endl;
}

void Quack::quack()
{
    std::cout<<"Quack"<<std::endl;
}

void MuteQuack::quack()
{
    std::cout<<"Silence"<<std::endl;
}

void Squeak::quack()
{
    std::cout<<"Squeak"<<std::endl;
}


void Duck::performFly()
{
    flyBehavior->fly();     //委托给行为类去执行操作，具体的操作取决于行为类是怎么样的
}

void Duck::performQuack()
{
    quackBehavior->quack();
}

//初始化，用能飞行的具体类和“Quack”叫声的具体类初始化指针，
MallardDuck::MallardDuck()
{
    flyBehavior = new FlyNoWay();
    quackBehavior = new MuteQuack();
}
//析构
MallardDuck::~MallardDuck()
{
    if(NULL != flyBehavior)
        delete flyBehavior;
    if(NULL != quackBehavior)
        delete quackBehavior;
}
