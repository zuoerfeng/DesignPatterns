#include <iostream>
#include "Adapter.h"
using namespace std;

int main()
{
    cout << "Hello world!" << endl;

    //����ģʽAdapter1
    Adaptee* ade = new Adaptee();
    Target* pTarget1= new Adapter1(ade);
    pTarget1->Request();

    //��ģʽAdapter
    Target* pTarget = new Adapter();
    pTarget->Request();

    return 0;
}
