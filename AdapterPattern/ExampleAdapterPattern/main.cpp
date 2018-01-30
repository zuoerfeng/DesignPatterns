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

    //´´½¨ÊÊÅäÆ÷µÄË«·½
    MallardDuck* duck = new MallardDuck();
    WildTurkey* turkey = new WildTurkey();
    Duck* turkeyAdapter = new TurkeyAdapter(turkey);

    testDuck(duck);//²âÊÔÑ¼×Ó
    cout<<endl;

    testDuck(turkeyAdapter);//²âÊÔ¼Ù×°ÊÇÑ¼×ÓµÄ»ğ¼¦ÊÊÅäÆ÷

    delete duck;
    delete turkey;
    delete turkeyAdapter;

    return 0;
}
