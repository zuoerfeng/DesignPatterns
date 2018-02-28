#ifndef STATE__H
#define STATE__H
#include <iostream>
using namespace std;

class GumballMachine;
class state;

//����״̬�Ľӿ�
class State
{
public:
    virtual void insertQuarter() = 0;//�˿�Ͷ��25��Ӳ��״̬
    virtual void ejectQuarter() = 0;//�˿�Ҫ���˻�Ӳ��״̬
    virtual void turnCrank() = 0;//ת������״̬
    virtual void dispense() = 0;//�����ǹ�״̬
};

//�۳�״̬
class SoldState : public State
{
private:
    GumballMachine* gumbalMachine;
public:
    SoldState(GumballMachine* gumbalMachine);

    void insertQuarter();//�˿�Ͷ��25��Ӳ��״̬
    void ejectQuarter();//�˿�Ҫ���˻�Ӳ��״̬
    void turnCrank();//ת������״̬
    void dispense();//�����ǹ�״̬
};

//û��25��Ǯ״̬
class NoQuarterState : public State
{
private:
    GumballMachine* gumbalMachine;
public:
    NoQuarterState(GumballMachine* gumbalMachine);     //ͨ��״̬������ȥ�������״̬

    void insertQuarter();//�˿�Ͷ��25��Ӳ��״̬
    void ejectQuarter();//�˿�Ҫ���˻�Ӳ��״̬
    void turnCrank();//ת������״̬
    void dispense();//�����ǹ�״̬
};

//��25��Ǯ״̬
class HasQuarterState : public State
{
private:
    GumballMachine* gumbalMachine;
public:
    HasQuarterState(GumballMachine* gumbalMachine);

    void insertQuarter();//�˿�Ͷ��25��Ӳ��״̬
    void ejectQuarter();//�˿�Ҫ���˻�Ӳ��״̬
    void turnCrank();//ת������״̬
    void dispense();//�����ǹ�״̬
};

//����״̬
class SoldOutState : public State
{
private:
    GumballMachine* gumbalMachine;
public:
    SoldOutState(GumballMachine* gumbalMachine);

    void insertQuarter();//�˿�Ͷ��25��Ӳ��״̬
    void ejectQuarter();//�˿�Ҫ���˻�Ӳ��״̬
    void turnCrank();//ת������״̬
    void dispense();//�����ǹ�״̬
};

//�ǹ�����
class GumballMachine
{
private:
    State* soldOutState;//�ǹ�����
    State* noQuarterState;//û��25��Ǯ
    State* hasQuarterState;//��25��Ǯ
    State* soldState;//�۳��ǹ�

    State* state;//�ǹ�����ǰ״̬
    int count;  //�ǹ���Ŀ
public:
    GumballMachine(int numberGumballs);

    void insertQuarter();
    void ejectQuarter();
    void turnCrank();
    void dispense();

    //����״̬��get����
    State* getNoQuarterState();
    State* getSoldOutState();
    State* getSoldState();
    State* getHasQuarterState();

    void SetState(State* state);
    //��ȡ�ǹ���Ŀ
    int getCount();
    void releaseBall();
};

#endif
