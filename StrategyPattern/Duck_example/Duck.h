#ifndef DUCK__H
#define DUCK__H

//������Ϊ������
class FlyBehavior
{
public:
    virtual void fly() = 0;
};
//�ܷ��о�����
class FlyWithWings : public FlyBehavior
{
public:
    void fly();
};
//���ܷ��о�����
class FlyNoWay : public FlyBehavior
{
public:
    void fly();
};


//������Ϊ������
class QuackBehavior
{
public:
    virtual void quack() = 0;
};
//���������ࡰQuack��
class Quack : public QuackBehavior
{
public:
    void quack();
};
//���������ࡰQuiet��
class MuteQuack : public QuackBehavior
{
public:
    void quack();
};
//���������ࡰSqueak��
class Squeak : public QuackBehavior
{
public:
    void quack();
};

//����
class Duck
{
public:
    virtual void performFly();
    virtual void performQuack();
//�����ָ�룬���ڶ�̬��ȷ����������Ϊ
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
