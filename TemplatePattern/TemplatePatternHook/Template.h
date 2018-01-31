//咖啡因饮料超类，具有钩子
class CaffeineBeverageWithHook
{
public:
    void prepareRecipe();//这是模板方法，因为：它是一个算法的模板。（在这个例子中，这个算法是用来制作饮料的）

    //在这个模板中，算法内的每一个步骤都被一个方法代表了，某些方法是由这个超类处理的，某些方法由子类处理，需要子类处理的方法被声明为抽象
    void boilWater();
    virtual void brew() = 0;
    void pourInCup();
    virtual void addCondiments() = 0;

    //添加钩子函数，由顾客决定是否需要添加调料,将接口暴露给用户
    virtual bool customerWantsCondiments();
};

class TeaWithHook : public CaffeineBeverageWithHook
{
public:
    void brew();
    void addCondiments();
    bool customerWantsCondiments();
};

//咖啡
class CoffeeWithHook : public CaffeineBeverageWithHook
{
public:
    void brew();
    void addCondiments();
    bool customerWantsCondiments();
};

