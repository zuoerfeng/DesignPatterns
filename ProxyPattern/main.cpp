#include <iostream>
#include "Proxy.h"
using namespace std;

int main()
{
    cout << "Hello world!" << endl;

    //����һ������
    Proxy* proxy = new Proxy();

    //�������������������Ƕ�ʵ�ʶ������һ��
    proxy->Request();

    return 0;
}
