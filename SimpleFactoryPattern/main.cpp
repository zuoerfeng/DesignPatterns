#include <iostream>
#include "SimpleFactory.h"
using namespace std;


int main()
{
    //��ͳ�Ķ���ʵ������ʱ��ÿ�ζ�Ҫnew�������һ�ֵ��͵Ĺ��̵ı��
    Mouse *a = new DellMouse();
    a->printMouse();
    Mouse *b = new HpMouse();
    b->printMouse();

    //���ü�(��̬)����ģʽ��������Щ������һ��������װ������ÿ�ε��ù���������������������ʵ����
    Mouse *c = SimpleFactory::creatMouse(0);     //ע����Խ�����������������Ϊ��̬�ģ���������Ҫ�Թ���ʵ�������ɴ�������
    c->printMouse();

    return 0;
}
