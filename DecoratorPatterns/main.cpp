#include <iostream>
#include "Decorate.h"

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    Beverage *a = new HouseBlend();
    cout << a->getDescription() <<  a->cost() << endl;

    //添加调料

    //语法知识：基类的指针或者引用可以绑定在派生类的对象的基类部分上
    a = new Mocha(a);    //关键点在于mocha的构造，它的构造是将a进行传参传入
    a = new Mocha(a);
    cout << a->getDescription() <<  a->cost() << endl;

    return 0;
}
