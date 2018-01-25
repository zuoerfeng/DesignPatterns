#include "product.h"

//完成对象的创建
class SimpleFactory{
public:
    static Mouse* creatMouse(int i)
    {
        switch(i)
        {
            case 0:
                return (new DellMouse());
            case 1:
                return (new HpMouse());
        }
    }
};

//建立一个抽象的工厂，具体的实例化由其子类来完成
class virtualMouseFactory
{
public:
     virtual Mouse* creatMouse(void) = 0;    //虚接口，创建鼠标实例由其子函数去完成
};


class HpMouseFactorym : public virtualMouseFactory{
    Mouse* creatMouse(void){
        return (new HpMouse());
    }
};


class DellMouseFactorym : public virtualMouseFactory{
    Mouse* creatMouse(void){
        return (new DellMouse());
    }
};

class HWMouseFactorym : public virtualMouseFactory{
    Mouse* creatMouse(void){
        return (new HWMouse());
    }
};

//建立一个多产品的抽象工厂，这个工厂可以生产不同的产品
class virtualPcFactory
{
public:
    virtual Mouse* creatMouse(void) = 0;    //虚接口，创建鼠标实例由其子函数去完成
    virtual Keyboard* creatKeyboard(void) = 0;    //虚接口，创建鼠标实例由其子函数去完成
};

class HpFactorym : public virtualPcFactory{
    Mouse* creatMouse(void){
        return (new HpMouse());
    }
    Keyboard* creatKeyboard(void){
        return (new HpKeyboard());
    }
};


class DellFactorym : public virtualPcFactory{
    Mouse* creatMouse(void){
        return (new DellMouse());
    }
    Keyboard* creatKeyboard(void){
        return (new DellKeyboard());
    }
};

class HWFactorym : public virtualPcFactory{
    Mouse* creatMouse(void){
        return (new HWMouse());
    }
    Keyboard* creatKeyboard(void){
        return (new HWKeyboard());
    }
};


