
#include "Adapter.h"

void MallardDuck::quack()
{
    cout<<"Quack"<<endl;
}

void MallardDuck::fly()
{
    cout<<"I'm flying"<<endl;
}

void WildTurkey::gobble()
{
    cout<<"Gobble gobble"<<endl;
}

void WildTurkey::shortFly()
{
    cout<<"I'm flying a short distance"<<endl;
}


TurkeyAdapter::TurkeyAdapter(Turkey *turkey)
{
    this->turkey = turkey;
}

void TurkeyAdapter::fly()
{
    for(int i=0; i<3; ++i)
        this->turkey->shortFly();
}

void TurkeyAdapter::quack()
{
    this->turkey->gobble();
}
