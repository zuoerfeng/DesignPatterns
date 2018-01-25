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

//��ɶ���Ĵ���
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

//����һ������Ĺ����������ʵ�����������������
class virtualFactory
{
public:
     virtual Mouse* creatMouse(void) = 0;    //��ӿڣ��������ʵ�������Ӻ���ȥ���
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
