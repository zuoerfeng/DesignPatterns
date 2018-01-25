#include <iostream>

using namespace std;

class Mouse
{
public:
    virtual void printMouse(void) = 0;
};

class DellMouse : public Mouse
{
    void printMouse(void){ cout << "Dell Mouse" << endl;}
};

class HpMouse : public Mouse
{
    void printMouse(void){ cout << "Hp Mouse" << endl;}
};

//完成对象的创建
class SimpleFactory
{
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
