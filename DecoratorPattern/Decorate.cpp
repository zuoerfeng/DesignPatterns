#include "Decorate.h"

Beverage::Beverage()
{
    description = "Unknow Beverage";
}

string Beverage::getDescription()
{
    return description;
}


Espresso::Espresso()
{
    description = "Espresso";
}

double Espresso::cost()
{
    return 1.99;
}


HouseBlend::HouseBlend()
{
    description = "House Blend Coffee";
}

double HouseBlend::cost()
{
    return 0.89;
}

Mocha::Mocha(Beverage* beverage)
{
    this->beverage = beverage;
}

string Mocha::getDescription()
{
    return beverage->getDescription() + ", Mocha";
}

double Mocha::cost()
{
    return 0.20 + beverage->cost();
}

