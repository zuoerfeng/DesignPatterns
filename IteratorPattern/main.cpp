#include <iostream>
#include "iterator.h"
using namespace std;

    string name;        //����
    string description; //�˵Ľ���
    bool vegetarian;    //�Ƿ�����
    double price;       //�۸�


int main()
{
    cout << "Hello world!" << endl;
    /*
    //��ӡ���е����
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

    //��ӡ���е��в�
    DinerMenu dinerMenu;
    for(int i=0; i<dinerMenu.size; i++)
    {
        cout << "name:" << dinerMenu.menuItems[i].getName() << endl;
        cout << "description:" << dinerMenu.menuItems[i].getDescription() << endl;
        cout << "vegetarian:" << dinerMenu.menuItems[i].isVegetrian() << endl;
        cout << "price:" << dinerMenu.menuItems[i].getPrice() << endl;
    }*/
    //�����������ǣ������в�ͬ�Ĵ洢�ṹ��������˲�ͬ�ı�����ʽ��������ظ����ܸߣ�û�кܺõ�����ԡ�

    //���õ�����ģʽ������һ��ͳһ�����ĵ��������û�����ȥ�������ô���洢��
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
