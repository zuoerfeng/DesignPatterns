#include "Template.h"
#include <iostream>
using namespace std;

int main()
{
    TeaWithHook* teaHook = new TeaWithHook();
    CoffeeWithHook* coffeeHook = new CoffeeWithHook();

    cout<<"Making tea..."<<endl;
    teaHook->prepareRecipe();

    cout<<endl<<"Making coffee..."<<endl;
    coffeeHook->prepareRecipe();

    delete teaHook;
    delete coffeeHook;

    CaffeineBeverageWithHook* caffeineBeverageWithHook = new TeaWithHook();
    cout<<"Making tea..."<<endl;
    caffeineBeverageWithHook->prepareRecipe();       //��̬�󶨣��󶨵������࣬��Ϊ���ٵ�ָ�������࣬

    //��ס���麯��������̬�󶨣���̬�󶨺�ָ��ָ��Ķ����й�
    //���麯��������̬�󶨣���̬�󶨺�ָ��������йأ�ָ���������ĸ��࣬���õľ��Ƕ�Ӧ��ĺ�����


}
