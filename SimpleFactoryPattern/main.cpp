#include <iostream>
#include "SimpleFactory.h"
using namespace std;


int main()
{
    //传统的对象实例化的时候，每次都要new，这就是一种典型的过程的编程
    Mouse *a = new DellMouse();
    a->printMouse();
    Mouse *b = new HpMouse();
    b->printMouse();

    //采用简单(静态)工厂模式：即将这些创建用一个工厂封装起来，每次调用工厂，传入参数，工厂完成实例化
    Mouse *c = SimpleFactory::creatMouse(0);     //注意可以将工厂创建函数定义为静态的，这样不需要对工厂实例化即可创建工厂
    c->printMouse();

    return 0;
}
