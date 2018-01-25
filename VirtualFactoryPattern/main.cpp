#include <iostream>
#include "VirtualFactoryPattern.H"

using namespace std;

int main()
{
    //���ü�(��̬)����ģʽ��������Щ������һ��������װ������ÿ�ε��ù���������������������ʵ����
    Mouse *c = SimpleFactory::creatMouse(0);     //ע����Խ�����������������Ϊ��̬�ģ���������Ҫ�Թ���ʵ�������ɴ�������
    c->printMouse();

    //��̬�Ĺ�������Ӳ�ͬ�Ķ���ʱ������Ҫ�޸Ĺ�����ģ������ýӿڳ��������
    virtualMouseFactory *a = new HpMouseFactorym();
    Mouse *d = a->creatMouse();
    d->printMouse();

    //����һ������HUWEI��������������HUWEI�����
    a = new HWMouseFactorym();
    d = a->creatMouse();
    d->printMouse();

    //���󹤳���������һ����Ʒ����
    virtualPcFactory *h = new DellFactorym();
    Mouse *k = h->creatMouse();
    Keyboard *p = h->creatKeyboard();
    p->printKeyboard();
    k->printMouse();

    //����һ������HUWEI��������������HUWEI����ꡢ����
    h = new HWFactorym();
    k = h->creatMouse();
    p = h->creatKeyboard();
    p->printKeyboard();
    k->printMouse();

    return 0;
}
