#ifndef TEMPLATE__H
#define TEMPLATE__H

//���������ϳ���
class CaffeineBeverage
{
public:
    virtual void prepareRecipe();//����ģ�巽������Ϊ������һ���㷨��ģ�塣������������У�����㷨�������������ϵģ�

    //�����ģ���У��㷨�ڵ�ÿһ�����趼��һ�����������ˣ�ĳЩ��������������ദ��ģ�ĳЩ���������ദ����Ҫ���ദ��ķ���������Ϊ����
    void boilWater();
    virtual void brew() = 0;    //�����ӿڣ�����������ľ��巽��
    void pourInCup();
    virtual void addCondiments() = 0;   //�����ӿڣ�����������ľ��巽��
};

//��
class Tea : public CaffeineBeverage
{
public:
    void brew();
    void addCondiments();
};

//����
class Coffee : public CaffeineBeverage
{
public:
    void brew();
    void addCondiments();
};


#endif
