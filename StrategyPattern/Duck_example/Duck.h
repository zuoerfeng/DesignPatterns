#ifndef DUCK__H
#define DUCK__H

//飞行行为抽象类
class FlyBehavior
{
public:
    virtual void fly() = 0;
};
//能飞行具体类
class FlyWithWings : public FlyBehavior
{
public:
    void fly();
};
//不能飞行具体类
class FlyNoWay : public FlyBehavior
{
public:
    void fly();
};


//叫声行为抽象类
class QuackBehavior
{
public:
    virtual void quack() = 0;
};
//叫声具体类“Quack”
class Quack : public QuackBehavior
{
public:
    void quack();
};
//叫声具体类“Quiet”
class MuteQuack : public QuackBehavior
{
public:
    void quack();
};
//叫声具体类“Squeak”
class Squeak : public QuackBehavior
{
public:
    void quack();
};

//基类
class Duck
{
public:
    virtual void performFly();
    virtual void performQuack();
//基类的指针，用于动态绑定确定动作的行为
    FlyBehavior* flyBehavior;
    QuackBehavior* quackBehavior;
};

class MallardDuck : public Duck
{
public:
    MallardDuck();
    ~MallardDuck();
    void display();
};


#endif
