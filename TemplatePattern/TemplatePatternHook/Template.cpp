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

//ģ�巽��
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
//���ӣ����า��������ӡ��ڴ�Ĭ�Ϸ���true
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


//���ӣ����า��������ӡ��ڴ�Ĭ�Ϸ���true
bool CoffeeWithHook::customerWantsCondiments()
{
    char t;
    cout<<"Would you like milk and sugar with your coffee?(y/n)"<<endl;
    cin>>t;
    if(t == 'y')
        return true;
    return false;
}

