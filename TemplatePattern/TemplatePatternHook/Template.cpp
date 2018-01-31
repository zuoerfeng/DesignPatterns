#include <iostream>
#include "Template.h"

using namespace std;

void CaffeineBeverageWithHook::boilWater()
{
    cout<<"Boiling water"<<endl;
}

void CaffeineBeverageWithHook::pourInCup()
{
    cout<<"Pouring into cup"<<endl;
}

bool CaffeineBeverageWithHook::customerWantsCondiments()
{
    return true;
}

//模板方法
void CaffeineBeverageWithHook::prepareRecipe()
{
    boilWater();
    brew();
    pourInCup();
    if(customerWantsCondiments())
        addCondiments();
}

void TeaWithHook::brew()
{
    cout<<"Steeping the tea"<<endl;
}

void TeaWithHook::addCondiments()
{
    cout<<"Adding Lemon"<<endl;
}
//钩子，子类覆盖这个钩子。在此默认返回true
bool TeaWithHook::customerWantsCondiments()
{
    char t;
    cout<<"Would you like Lemon with your tea?(y/n)"<<endl;
    cin>>t;
    if(t == 'y')
        return true;
    return false;
}


void CoffeeWithHook::brew()
{
    cout<<"Dripping Coffee through filter"<<endl;
}

void CoffeeWithHook::addCondiments()
{
    cout<<"Adding Sugar and Milk"<<endl;
}


//钩子，子类覆盖这个钩子。在此默认返回true
bool CoffeeWithHook::customerWantsCondiments()
{
    char t;
    cout<<"Would you like milk and sugar with your coffee?(y/n)"<<endl;
    cin>>t;
    if(t == 'y')
        return true;
    return false;
}

