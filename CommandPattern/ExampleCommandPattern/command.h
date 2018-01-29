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
    LightOnCommand(Light* light);//构造函数被传入某个电灯(如:客厅的电灯),以便让这个命令控制,
    void execute();//这个execute方法调用接收对象(我们正在控制的电灯)的on方法.
};

