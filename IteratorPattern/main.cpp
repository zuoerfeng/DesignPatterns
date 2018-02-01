#include <iostream>
#include "iterator.h"
using namespace std;

    string name;        //菜名
    string description; //菜的介绍
    bool vegetarian;    //是否是素
    double price;       //价格


int main()
{
    cout << "Hello world!" << endl;
    /*
    //打印所有的早餐
    PancakeHouseMenu breakfastMenu;
    vector<MenuItem> breakfastItems = breakfastMenu.getMenuItems();
    for(vector<MenuItem>::iterator it=breakfastItems.begin(); it!=breakfastItems.end(); ++it)
    {
        cout << "name:" << (*it).getName() << endl;
        cout << "description:" << (*it).getDescription() << endl;
        cout << "vegetarian:" << (*it).isVegetrian() << endl;
        cout << "price:" << (*it).getPrice() << endl;
    }

    cout << endl;

    //打印所有的中餐
    DinerMenu dinerMenu;
    for(int i=0; i<dinerMenu.size; i++)
    {
        cout << "name:" << dinerMenu.menuItems[i].getName() << endl;
        cout << "description:" << dinerMenu.menuItems[i].getDescription() << endl;
        cout << "vegetarian:" << dinerMenu.menuItems[i].isVegetrian() << endl;
        cout << "price:" << dinerMenu.menuItems[i].getPrice() << endl;
    }*/
    //上述的问题是，由于有不同的存储结构，则采用了不同的遍历方式，代码的重复读很高，没有很好的耦合性。

    //采用迭代器模式，增加一个统一遍历的迭代器，用户不用去理睬是怎么样存储的
    DinerMenu dinerMenu1;
    Iterator *it = dinerMenu1.createIterator();
    while(it->hasNext()){
        MenuItem menuItem = it->next();
        cout << "name:" << menuItem.getName() << endl;
        cout << "description:" << menuItem.getDescription() << endl;
        cout << "vegetarian:" << menuItem.isVegetrian() << endl;
        cout << "price:" << menuItem.getPrice() << endl;
    }

    return 0;
}
