#ifndef STATE__H
#define STATE__H
#include <iostream>
using namespace std;

class GumballMachine;
class state;

//创建状态的接口
class State
{
public:
    virtual void insertQuarter() = 0;//顾客投入25分硬币状态
    virtual void ejectQuarter() = 0;//顾客要求退回硬币状态
    virtual void turnCrank() = 0;//转动曲柄状态
    virtual void dispense() = 0;//发放糖果状态
};

//售出状态
class SoldState : public State
{
private:
    GumballMachine* gumbalMachine;
public:
    SoldState(GumballMachine* gumbalMachine);

    void insertQuarter();//顾客投入25分硬币状态
    void ejectQuarter();//顾客要求退回硬币状态
    void turnCrank();//转动曲柄状态
    void dispense();//发放糖果状态
};

//没有25分钱状态
class NoQuarterState : public State
{
private:
    GumballMachine* gumbalMachine;
public:
    NoQuarterState(GumballMachine* gumbalMachine);     //通过状态机对象去构造这个状态

    void insertQuarter();//顾客投入25分硬币状态
    void ejectQuarter();//顾客要求退回硬币状态
    void turnCrank();//转动曲柄状态
    void dispense();//发放糖果状态
};

//有25分钱状态
class HasQuarterState : public State
{
private:
    GumballMachine* gumbalMachine;
public:
    HasQuarterState(GumballMachine* gumbalMachine);

    void insertQuarter();//顾客投入25分硬币状态
    void ejectQuarter();//顾客要求退回硬币状态
    void turnCrank();//转动曲柄状态
    void dispense();//发放糖果状态
};

//售罄状态
class SoldOutState : public State
{
private:
    GumballMachine* gumbalMachine;
public:
    SoldOutState(GumballMachine* gumbalMachine);

    void insertQuarter();//顾客投入25分硬币状态
    void ejectQuarter();//顾客要求退回硬币状态
    void turnCrank();//转动曲柄状态
    void dispense();//发放糖果状态
};

//糖果机类
class GumballMachine
{
private:
    State* soldOutState;//糖果售罄
    State* noQuarterState;//没有25分钱
    State* hasQuarterState;//有25分钱
    State* soldState;//售出糖果

    State* state;//糖果机当前状态
    int count;  //糖果数目
public:
    GumballMachine(int numberGumballs);

    void insertQuarter();
    void ejectQuarter();
    void turnCrank();
    void dispense();

    //各个状态的get方法
    State* getNoQuarterState();
    State* getSoldOutState();
    State* getSoldState();
    State* getHasQuarterState();

    void SetState(State* state);
    //获取糖果数目
    int getCount();
    void releaseBall();
};

#endif
