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
    caffeineBeverageWithHook->prepareRecipe();       //动态绑定，绑定的是子类，因为开辟的指针是子类，

    //记住：虚函数发生动态绑定，动态绑定和指针指向的对象有关
    //非虚函数发生静态绑定，静态绑定和指针的类型有关，指针类型是哪个类，调用的就是对应类的函数。


}
