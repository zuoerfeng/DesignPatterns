#include <iostream>
#include "Adapter.h"
using namespace std;

void testDuck(Duck* duck)
{
    duck->quack();
    duck->fly();
}

int main()
{
    cout << "Hello world!" << endl;

    //������������˫��
    MallardDuck* duck = new MallardDuck();
    WildTurkey* turkey = new WildTurkey();
    Duck* turkeyAdapter = new TurkeyAdapter(turkey);

    testDuck(duck);//����Ѽ��
    cout<<endl;

    testDuck(turkeyAdapter);//���Լ�װ��Ѽ�ӵĻ�������

    delete duck;
    delete turkey;
    delete turkeyAdapter;

    return 0;
}
