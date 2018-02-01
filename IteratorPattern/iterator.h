#ifndef ITERATOR__H
#define ITERATOR__H
#include <string>
#include <iostream>
#include <vector>

using namespace std;
#define MAX_ITEMS 4     //数组菜单默认大小设为4

class Iterator;

//定义菜单项
class MenuItem
{
public:
    string name;        //菜名
    string description; //菜的介绍
    bool vegetarian;    //是否是素
    double price;       //价格

    MenuItem();
    MenuItem(string name, string description, bool vegetarian, double price);//构造函数，初始化菜单项
    string getName();
    string getDescription();
    double getPrice();
    bool isVegetrian();
};

//早餐菜单
class PancakeHouseMenu
{
public:
    vector<MenuItem> menuitems;//使用vector存储菜单项

    PancakeHouseMenu();
    void addItem(string name, string description, bool vegetarian, double price);//添加菜单项
    vector<MenuItem> getMenuItems();//返回菜单项列表
};

//中餐菜单
class DinerMenu
{
public:
    int size = 0;   //菜单数目
    MenuItem menuItems[MAX_ITEMS];//使用数组保存菜单项

    DinerMenu();
    void addItem(string name, string description, bool vegetarian, double price);//添加菜单项
    MenuItem* getMenuItems();//返回菜单数组
    Iterator* createIterator();
};

//创建一个迭代器的接口
class Iterator
{
public:
    virtual bool hasNext() = 0;
    virtual MenuItem next() = 0;
};

//具体迭代器
class DinerMenuIterator : public Iterator
{
public:
    int position = 0;//position记录当前数组遍历的位置
    MenuItem* menuItems;

    DinerMenuIterator(MenuItem items[]);
    bool hasNext();
    MenuItem next();
};

#endif
