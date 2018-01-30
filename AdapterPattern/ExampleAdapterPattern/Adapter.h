#ifndef ADAPTER__H
#define ADAPTER__H
#include <iostream>
using namespace std;

//定义鸭子抽象类Duck,具有叫和飞的能力
class Duck
{
public:
    virtual void quack() = 0;
    virtual void fly() = 0;
};

//定义MallardDuck类,它是鸭子的子类
class MallardDuck : public Duck
{
public:
    void quack();
    void fly();
};

//定义火鸡抽象类Turkey,具有gobble叫和短途飞行能力
class Turkey
{
public:
    virtual void gobble() = 0;
    virtual void shortFly() = 0;
};

//定义WildTurkey类,它是火鸡类Turkey的具体实例
class WildTurkey : public Turkey
{
public:
    void gobble();
    void shortFly();
};

//适配器类.将火鸡转换成鸭子的适配器.
//需要实现想转换成的类型接口,也就是客户所期望看到的接口(此例子中Duck是期望的接口)
class TurkeyAdapter : public Duck
{
public:
    Turkey* turkey;

    TurkeyAdapter(Turkey* turkey);//取得要适配的对象的引用或指针，这里我们使用构造器取得
    void quack();//实现接口中的所有方法，quack（）在类之间的转换很简单，只要调用gobble（）就可以
    void fly();
};

#endif // ADAPTER__H
