#include <iostream>
#include "state.h"

using namespace std;

int main()
{
    //���ȴ���һ���ǹ���
    GumballMachine* gumballMachine = new GumballMachine(2);
    cout << gumballMachine->getCount() << endl;

    //���ǿ�ʼ���ǹ���Ͷ��
    gumballMachine->insertQuarter();
    //����ת��
    gumballMachine->turnCrank();
    //�����˱�
    gumballMachine->ejectQuarter();

    //���ǿ�ʼ���ǹ���Ͷ��
    gumballMachine->insertQuarter();
    //����ת��
    gumballMachine->turnCrank();

    //���ǿ�ʼ���ǹ���Ͷ��
    gumballMachine->insertQuarter();

    return 0;
}
