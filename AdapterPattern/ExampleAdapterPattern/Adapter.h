#ifndef ADAPTER__H
#define ADAPTER__H
#include <iostream>
using namespace std;

//����Ѽ�ӳ�����Duck,���нкͷɵ�����
class Duck
{
public:
    virtual void quack() = 0;
    virtual void fly() = 0;
};

//����MallardDuck��,����Ѽ�ӵ�����
class MallardDuck : public Duck
{
public:
    void quack();
    void fly();
};

//����𼦳�����Turkey,����gobble�кͶ�;��������
class Turkey
{
public:
    virtual void gobble() = 0;
    virtual void shortFly() = 0;
};

//����WildTurkey��,���ǻ���Turkey�ľ���ʵ��
class WildTurkey : public Turkey
{
public:
    void gobble();
    void shortFly();
};

//��������.����ת����Ѽ�ӵ�������.
//��Ҫʵ����ת���ɵ����ͽӿ�,Ҳ���ǿͻ������������Ľӿ�(��������Duck�������Ľӿ�)
class TurkeyAdapter : public Duck
{
public:
    Turkey* turkey;

    TurkeyAdapter(Turkey* turkey);//ȡ��Ҫ����Ķ�������û�ָ�룬��������ʹ�ù�����ȡ��
    void quack();//ʵ�ֽӿ��е����з�����quack��������֮���ת���ܼ򵥣�ֻҪ����gobble�����Ϳ���
    void fly();
};

#endif // ADAPTER__H
