#include "command.h"

class SimpleRemoteControl
{
public:
    Command* slot;//有个插槽持有命令,而这个命令控制一个装置
    void setCommand(Command* command);  //这个方法用来设置命令.如果这段代码的客户想要多次改变遥控器按钮的行为,
                                    //可以多次调用这个方法
    void ButtonPressed();//按下按钮时,这个方法被调用,使得当前命令衔接的插槽,并调用它的execute()方法.
};



