#include "Template.h"
#include <iostream>

using namespace std;

void CaffeineBeverage::boilWater()
{
    cout<<"Boiling water"<<endl;
}

void CaffeineBeverage::pourInCup()
{
    cout<<"Pouring into cup"<<endl;
}
//Ä£°å·½·¨
void CaffeineBeverage::prepareRecipe()
{
    boilWater();
    brew();
    pourInCup();
    addCondiments();
}


void Tea::brew()
{
    cout<<"Steeping the tea"<<endl;
}

void Tea::addCondiments()
{
    cout<<"Adding Lemon"<<endl;
}

void Coffee::brew()
{
    cout<<"Dripping Coffee through filter"<<endl;
}

void Coffee::addCondiments()
{
    cout<<"Adding Sugar and Milk"<<endl;
}

