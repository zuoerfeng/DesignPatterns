#include <iostream>
using namespace std;

class Mouse{
public:
    virtual void printMouse(void) = 0;
};

class DellMouse : public Mouse{
    void printMouse(void){ cout << "Dell Mouse" << endl;}
};

class HpMouse : public Mouse{
    void printMouse(void){ cout << "Hp Mouse" << endl;}
};

class HWMouse : public Mouse{
    void printMouse(void){ cout << "HUWEI Mouse" << endl;}
};

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
class virtualFactory
{
public:
     virtual Mouse* creatMouse(void) = 0;    //虚接口，创建鼠标实例由其子函数去完成
};


class HpMouseFactorym : public virtualFactory{
    Mouse* creatMouse(void){
        return (new HpMouse());
    }
};


class DellMouseFactorym : public virtualFactory{
    Mouse* creatMouse(void){
        return (new DellMouse());
    }
};

class HWMouseFactorym : public virtualFactory{
    Mouse* creatMouse(void){
        return (new HWMouse());
    }
};
