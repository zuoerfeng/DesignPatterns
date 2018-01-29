#include <iostream>

using namespace std;

class Command
{
public:
    virtual void execute() = 0;
};

class Light
{
public:
    void on();
    void off();
};

class LightOnCommand : public Command
{
public:
    Light* light;
    LightOnCommand(Light* light);//���캯��������ĳ�����(��:�����ĵ��),�Ա�������������,
    void execute();//���execute�������ý��ն���(�������ڿ��Ƶĵ��)��on����.
};

