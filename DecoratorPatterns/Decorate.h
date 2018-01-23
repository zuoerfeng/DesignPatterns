#ifndef DECORATE__H
#define DECORATE__H
#include <string>
#include <iostream>

using namespace std;

class Beverage
{
public:
    string description;
    Beverage();
    string getDescription();
    virtual double cost() = 0;       //纯虚函数
};

class CondimentDecorator : public Beverage   //定义装饰者的接口，即通过这个接口都可以装饰原父类
{
public:
    virtual string getDescription() = 0;
};


//Espresso饮料
class Espresso : public Beverage
{
public:
    Espresso();
    double cost();
};

//HouseBlend饮料
class HouseBlend : public Beverage
{
public:
    HouseBlend();
    double cost();
};

//Mocha装饰者
class Mocha: public CondimentDecorator
{
public:
    Beverage* beverage;    //为了保证被装饰对象的属性及行为
    Mocha(Beverage* beverage);

    string getDescription();
    double cost();                  //装饰着的行为，这里是价格
};

#endif // DECORATE__H
