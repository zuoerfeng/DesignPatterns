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
    flyBehavior->fly();     //ί�и���Ϊ��ȥִ�в���������Ĳ���ȡ������Ϊ������ô����
}

void Duck::performQuack()
{
    quackBehavior->quack();
}

//��ʼ�������ܷ��еľ�����͡�Quack�������ľ������ʼ��ָ�룬
MallardDuck::MallardDuck()
{
    flyBehavior = new FlyNoWay();
    quackBehavior = new MuteQuack();
}
//����
MallardDuck::~MallardDuck()
{
    if(NULL != flyBehavior)
        delete flyBehavior;
    if(NULL != quackBehavior)
        delete quackBehavior;
}
