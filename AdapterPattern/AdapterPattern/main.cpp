#include <iostream>
#include "Adapter.h"
using namespace std;

int main()
{
    cout << "Hello world!" << endl;

    //对象模式Adapter1
    Adaptee* ade = new Adaptee();
    Target* pTarget1= new Adapter1(ade);
    pTarget1->Request();

    //类模式Adapter
    Target* pTarget = new Adapter();
    pTarget->Request();

    return 0;
}
