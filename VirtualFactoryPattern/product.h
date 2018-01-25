#include <iostream>
using namespace std;

//����Ʒ
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

//���̲�Ʒ
class Keyboard{
public:
    virtual void printKeyboard(void) = 0;
};

class DellKeyboard : public Keyboard{
    void printKeyboard(void){ cout << "Dell Keyboard" << endl;}
};

class HpKeyboard : public Keyboard{
    void printKeyboard(void){ cout << "Hp Keyboard" << endl;}
};

class HWKeyboard : public Keyboard{
    void printKeyboard(void){ cout << "HUWEI Keyboard" << endl;}
};
