#ifndef ITERATOR__H
#define ITERATOR__H
#include <string>
#include <iostream>
#include <vector>

using namespace std;
#define MAX_ITEMS 4     //����˵�Ĭ�ϴ�С��Ϊ4

class Iterator;

//����˵���
class MenuItem
{
public:
    string name;        //����
    string description; //�˵Ľ���
    bool vegetarian;    //�Ƿ�����
    double price;       //�۸�

    MenuItem();
    MenuItem(string name, string description, bool vegetarian, double price);//���캯������ʼ���˵���
    string getName();
    string getDescription();
    double getPrice();
    bool isVegetrian();
};

//��Ͳ˵�
class PancakeHouseMenu
{
public:
    vector<MenuItem> menuitems;//ʹ��vector�洢�˵���

    PancakeHouseMenu();
    void addItem(string name, string description, bool vegetarian, double price);//��Ӳ˵���
    vector<MenuItem> getMenuItems();//���ز˵����б�
};

//�вͲ˵�
class DinerMenu
{
public:
    int size = 0;   //�˵���Ŀ
    MenuItem menuItems[MAX_ITEMS];//ʹ�����鱣��˵���

    DinerMenu();
    void addItem(string name, string description, bool vegetarian, double price);//��Ӳ˵���
    MenuItem* getMenuItems();//���ز˵�����
    Iterator* createIterator();
};

//����һ���������Ľӿ�
class Iterator
{
public:
    virtual bool hasNext() = 0;
    virtual MenuItem next() = 0;
};

//���������
class DinerMenuIterator : public Iterator
{
public:
    int position = 0;//position��¼��ǰ���������λ��
    MenuItem* menuItems;

    DinerMenuIterator(MenuItem items[]);
    bool hasNext();
    MenuItem next();
};

#endif
