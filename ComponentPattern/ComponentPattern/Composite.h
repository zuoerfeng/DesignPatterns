#ifndef _COMPOSITE_H_
#define _COMPOSITE_H_

#include <vector>

using namespace std;

/*
Component������࣬Ϊ����еĶ��������ӿ�,�������๲�нӿڵ�ȱʡ��Ϊ(�������Add,Remove,GetChild����),
����һ���ӿں������Է���Component�������.
*/
class Component
{
public:
    //���麯����ֻ�ṩ�ӿڣ�û��Ĭ�ϵ�ʵ��
    virtual void Operation()=0;

    // �麯��,�ṩ�ӿ�,��Ĭ�ϵ�ʵ�־���ʲô������
    virtual void Add(Component*);
    virtual void Remove(Component*);

    virtual Component* GetChild(int index);       //�õ������
    virtual ~Component();
protected:
    Component();
};

//Leaf��Ҷ�ӽ��,Ҳ���ǲ�����������Ľ���࣬���Բ���ʵ��Add��Remove��GetChild�ȷ���
class Leaf:public Component
{
public:
    //ֻʵ��Operation�ӿ�
    virtual void Operation();
    Leaf();
    ~Leaf();
};

//Composite���������������
class Composite:public Component
{
public:
    Composite();
    ~Composite();
    //ʵ�����нӿ�
    void Operation();
    void Add(Component*);
    void Remove(Component*);
    Component* GetChild(int index);
private:
    //�������vector�����������
    vector<Component*> m_ComVec;
};
#endif

