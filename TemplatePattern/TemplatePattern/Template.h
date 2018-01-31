#ifndef TEMPLATE__H
#define TEMPLATE__H

//咖啡因饮料超类
class CaffeineBeverage
{
public:
    virtual void prepareRecipe();//这是模板方法，因为：它是一个算法的模板。（在这个例子中，这个算法是用来制作饮料的）

    //在这个模板中，算法内的每一个步骤都被一个方法代表了，某些方法是由这个超类处理的，某些方法由子类处理，需要子类处理的方法被声明为抽象
    void boilWater();
    virtual void brew() = 0;    //两个接口，子类决定它的具体方法
    void pourInCup();
    virtual void addCondiments() = 0;   //两个接口，子类决定它的具体方法
};

//茶
class Tea : public CaffeineBeverage
{
public:
    void brew();
    void addCondiments();
};

//咖啡
class Coffee : public CaffeineBeverage
{
public:
    void brew();
    void addCondiments();
};


#endif
