#include "product.h"

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
class virtualMouseFactory
{
public:
     virtual Mouse* creatMouse(void) = 0;    //��ӿڣ��������ʵ�������Ӻ���ȥ���
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

//����һ�����Ʒ�ĳ��󹤳��������������������ͬ�Ĳ�Ʒ
class virtualPcFactory
{
public:
    virtual Mouse* creatMouse(void) = 0;    //��ӿڣ��������ʵ�������Ӻ���ȥ���
    virtual Keyboard* creatKeyboard(void) = 0;    //��ӿڣ��������ʵ�������Ӻ���ȥ���
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

