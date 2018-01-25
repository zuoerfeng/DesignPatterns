#include <iostream>
#include "VirtualFactoryPattern.H"

using namespace std;

int main()
{
    //采用简单(静态)工厂模式：即将这些创建用一个工厂封装起来，每次调用工厂，传入参数，工厂完成实例化
    Mouse *c = SimpleFactory::creatMouse(0);     //注意可以将工厂创建函数定义为静态的，这样不需要对工厂实例化即可创建工厂
    c->printMouse();

    //静态的工厂，添加不同的对象时还是需要修改工厂类的，不如用接口抽象出来。
    virtualMouseFactory *a = new HpMouseFactorym();
    Mouse *d = a->creatMouse();
    d->printMouse();

    //增加一个厂商HUWEI工厂，用于生产HUWEI的鼠标
    a = new HWMouseFactorym();
    d = a->creatMouse();
    d->printMouse();

    //抽象工厂，多生产一个产品键盘
    virtualPcFactory *h = new DellFactorym();
    Mouse *k = h->creatMouse();
    Keyboard *p = h->creatKeyboard();
    p->printKeyboard();
    k->printMouse();

    //增加一个厂商HUWEI工厂，用于生产HUWEI的鼠标、键盘
    h = new HWFactorym();
    k = h->creatMouse();
    p = h->creatKeyboard();
    p->printKeyboard();
    k->printMouse();

    return 0;
}
