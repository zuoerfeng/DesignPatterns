#include <iostream>
#include "SimpleRemoteControl.h"

using namespace std;

int main()
{
    cout << "Hello world!" << endl;

    //初始化一遥控器
    SimpleRemoteControl* remote = new SimpleRemoteControl();//创建遥控器,就是调用者

    //初始化一个动作，灯的控制
    Light* light = new Light();//创建点等对象,次对象就是命令请求的接受者

    //把这个动作封装到命令请求中，创建一个开灯关灯的命令对象
    LightOnCommand* lightOn = new LightOnCommand(light);//创建一个命令,然后将接受者传给它

    //把这个生成的命令对象传递给调用者
    remote->setCommand(lightOn);//把命令传给调用者

    //调用者使用这个命令
    remote->ButtonPressed();//模拟按下按钮

    delete remote;
    delete light;
    delete lightOn;
    return 0;
}
