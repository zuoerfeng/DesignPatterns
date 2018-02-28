#include "state.h"

//NoQuarterState״̬��ʵ��
NoQuarterState::NoQuarterState(GumballMachine* gumbalMachine)//ͨ�����캯���õ��ǹ������ã�Ȼ������¼��ʵ������
{
    this->gumbalMachine = gumbalMachine;
}
void NoQuarterState::insertQuarter()
{
    cout<<"You inserted a quarter"<<endl;
    this->gumbalMachine->SetState(gumbalMachine->getHasQuarterState());
}
void NoQuarterState::ejectQuarter()
{
    cout<<"You haven't insert a quarter"<<endl;
}
void NoQuarterState::turnCrank()
{
    cout<<"You turned, but there's no quarter"<<endl;
}
void NoQuarterState::dispense()
{
    cout<<"You need to pay first"<<endl;
}

//HasQuarterState״̬��ʵ��
HasQuarterState::HasQuarterState(GumballMachine* gumbalMachine)
{
    this->gumbalMachine = gumbalMachine;
}
void HasQuarterState::insertQuarter()
{
    cout<<"You can't insert another quarter"<<endl;
}
void HasQuarterState::ejectQuarter()
{
    cout<<"Quarter returned"<<endl;
    this->gumbalMachine->SetState(gumbalMachine->getNoQuarterState());
}
void HasQuarterState::turnCrank()
{
    cout<<"You turned..."<<endl;
    this->gumbalMachine->SetState(this->gumbalMachine->getSoldState());
}
void HasQuarterState::dispense()
{
    cout<<"No gumball dispensed"<<endl;
}

//SoldState״̬��ʵ��
SoldState::SoldState(GumballMachine* gumbalMachine)
{
    this->gumbalMachine = gumbalMachine;
}
void SoldState::insertQuarter()
{
    cout<<"Please wait, we're already giving you a gumball"<<endl;
}
void SoldState::ejectQuarter()
{
    cout<<"Sorry, you already turned the crank"<<endl;
}
void SoldState::turnCrank()
{
    cout<<"Turning twice doesn't get you another gumball"<<endl;
}
void SoldState::dispense()
{
    this->gumbalMachine->releaseBall();
    if(gumbalMachine->getCount() > 0)
        gumbalMachine->SetState(gumbalMachine->getNoQuarterState());
    else
    {
        cout<<"Oops , out of gumballs!"<<endl;
        gumbalMachine->SetState(gumbalMachine->getSoldOutState());
    }

}

//SoldState״̬��ʵ��
SoldOutState::SoldOutState(GumballMachine* gumbalMachine)
{
    this->gumbalMachine = gumbalMachine;
}
void SoldOutState::insertQuarter()
{
    cout<<"sorry,the machine is sold out"<<endl;
}
void SoldOutState::ejectQuarter()
{
    cout<<"Sorry, you can't eject, you havent inserted a quarter yet"<<endl;
}
void SoldOutState::turnCrank()
{
    cout<<"you turned but there are no gumballs"<<endl;
}
void SoldOutState::dispense()
{
    cout<<"No gumball dispensed"<<endl;
}

GumballMachine::GumballMachine(int numberGumballs)//�ǹ������캯��
{
    noQuarterState = new NoQuarterState(this);
    hasQuarterState = new HasQuarterState(this);
    soldState = new SoldState(this);
    soldOutState = new SoldOutState(this);
    this->count = numberGumballs;
    if(numberGumballs > 0 )//����0���ǹ���״̬��ΪNoQuarterState
        state = noQuarterState;
}

void GumballMachine::insertQuarter()
{
    state->insertQuarter();
}
void GumballMachine::ejectQuarter()
{
    state->ejectQuarter();
}
void GumballMachine::turnCrank()
{
    state->turnCrank();
    state->dispense();//ע�⣬���ǲ���Ҫ���ǹ�����׼��һ��dispense�����ķ�������Ϊ��ֻ��һ���ڲ��������û����Բ�ֱ��Ҫ����������ǹ���������������״̬�����turnCrank�����е���dispense������
}

void GumballMachine::SetState(State* state)
{
    this->state = state;
}
//��ȡÿ��״̬�ķ���
State* GumballMachine::getNoQuarterState()
{
    return noQuarterState;
}
State* GumballMachine::getHasQuarterState()
{
    return hasQuarterState;
}
State* GumballMachine::getSoldOutState()
{
    return soldOutState;
}
State* GumballMachine::getSoldState()
{
    return soldState;
}
int GumballMachine::getCount()
{
    return count;
}
void GumballMachine::releaseBall()
{
    cout<<"A gumball comes rolling out the slot..."<<endl;
    if(count != 0)
        count--;
}
