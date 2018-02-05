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
    virtual double cost() = 0;       //���麯��
};

class CondimentDecorator : public Beverage   //����װ���ߵĽӿڣ���ͨ������ӿڶ�����װ��ԭ����
{
public:
    virtual string getDescription() = 0;
};


//Espresso����
class Espresso : public Beverage
{
public:
    Espresso();
    double cost();
};

//HouseBlend����
class HouseBlend : public Beverage
{
public:
    HouseBlend();
    double cost();
};

//Mochaװ����
class Mocha: public CondimentDecorator
{
public:
    Beverage* beverage;    //Ϊ�˱�֤��װ�ζ�������Լ���Ϊ
    Mocha(Beverage* beverage);

    string getDescription();
    double cost();                  //װ���ŵ���Ϊ�������Ǽ۸�
};

#endif // DECORATE__H
