#include "iterator.h"

MenuItem::MenuItem(string name, string description, bool vegetarian, double price)
{
    this->name = name;
    this->description = description;
    this->vegetarian = vegetarian;
    this->price = price;
}
MenuItem::MenuItem(){};//由于数组是静态定义，因此会调用MenuItem的默认构造函数

string MenuItem::getDescription()   {   return description; }
string MenuItem::getName()          {   return name;        }
double MenuItem::getPrice()         {   return price;       }
bool   MenuItem::isVegetrian()      {   return vegetarian;  }

//早餐菜单操作实现
PancakeHouseMenu::PancakeHouseMenu()
{
    //默认添加一些菜单项
    addItem("Breakfast_1", "Description_1", true, 2.99);
    addItem("Breakfast_2", "Description_2", false, 2.99);
    addItem("Breakfast_3", "Description_3", true, 3.49);
    addItem("Breakfast_4", "Description_4", true, 3.59);
}

void PancakeHouseMenu::addItem(string name, string description, bool vegetarian, double price)
{
    MenuItem item(name, description, vegetarian, price);//新建菜单项
    menuitems.push_back(item);//加入菜单
}

vector<MenuItem> PancakeHouseMenu::getMenuItems()
{
    return menuitems;
}

//中餐菜单操作实现
DinerMenu::DinerMenu()
{
    //默认添加一些菜单项
    addItem("Dinner_1", "Description_Dinner_1", true, 2.99);
    addItem("Dinner_2", "Description_Dinner_2", false, 2.99);
    addItem("Dinner_3", "Description_Dinner_3", false, 3.29);
    addItem("Dinner_4", "Description_Dinner_4", false, 3.05);
}

void DinerMenu::addItem(string name, string description, bool vegetarian, double price)
{
    MenuItem item(name, description, vegetarian, price);//新建菜单项
    if(this->size >= MAX_ITEMS)
        cout<<"Sorry, menu is full!Can't add item to menu"<<endl;
    else
        menuItems[size++] = item;
}

MenuItem* DinerMenu::getMenuItems()
{
    return menuItems;
}

Iterator* DinerMenu::createIterator()
{
    return new DinerMenuIterator(menuItems);
}

DinerMenuIterator::DinerMenuIterator(MenuItem items[])
{
    this->menuItems = items;
}

MenuItem DinerMenuIterator::next()
{
    cout << "next" << position << endl;
    return menuItems[position++];//next方法返回数组的下一项，并递增位置
}

bool DinerMenuIterator::hasNext()
{
     cout << "hasnext" << position << endl;
    if(position >= MAX_ITEMS)
        return false;
    return true;
}


