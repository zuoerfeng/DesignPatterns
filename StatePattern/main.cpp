#include <iostream>
#include "state.h"

using namespace std;

int main()
{
    //首先创建一个糖果机
    GumballMachine* gumballMachine = new GumballMachine(2);
    cout << gumballMachine->getCount() << endl;

    //我们开始往糖果机投币
    gumballMachine->insertQuarter();
    //我们转动
    gumballMachine->turnCrank();
    //我们退币
    gumballMachine->ejectQuarter();

    //我们开始往糖果机投币
    gumballMachine->insertQuarter();
    //我们转动
    gumballMachine->turnCrank();

    //我们开始往糖果机投币
    gumballMachine->insertQuarter();

    return 0;
}
