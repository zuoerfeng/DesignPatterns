#include <iostream>
#include "Proxy.h"
using namespace std;

int main()
{
    cout << "Hello world!" << endl;

    //创建一个代理
    Proxy* proxy = new Proxy();

    //对这个代理操作，就像是对实际对象操作一样
    proxy->Request();

    return 0;
}
