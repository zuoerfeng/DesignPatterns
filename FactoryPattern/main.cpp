#include <iostream>
#include "FactoryPattern.h"

using namespace std;

int main()
{
    //���ü�(��̬)����ģʽ��������Щ������һ��������װ������ÿ�ε��ù���������������������ʵ����
    Mouse *c = SimpleFactory::creatMouse(0);     //ע����Խ�����������������Ϊ��̬�ģ���������Ҫ�Թ���ʵ�������ɴ�������
    c->printMouse();

    //��̬�Ĺ�������Ӳ�ͬ�Ķ���ʱ������Ҫ�޸Ĺ�����ģ������ýӿڳ��������
    virtualFactory *a = new HpMouseFactorym();
    Mouse *d = a->creatMouse();
    d->printMouse();

    //����һ������HUWEI��������������HUWEI�����
    a = new HWMouseFactorym();
    d = a->creatMouse();
    d->printMouse();

    return 0;
}
