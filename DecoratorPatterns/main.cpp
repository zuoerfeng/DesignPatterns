#include <iostream>
#include "Decorate.h"

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    Beverage *a = new HouseBlend();
    cout << a->getDescription() <<  a->cost() << endl;

    //��ӵ���

    //�﷨֪ʶ�������ָ��������ÿ��԰���������Ķ���Ļ��ಿ����
    a = new Mocha(a);    //�ؼ�������mocha�Ĺ��죬���Ĺ����ǽ�a���д��δ���
    a = new Mocha(a);
    cout << a->getDescription() <<  a->cost() << endl;

    return 0;
}
