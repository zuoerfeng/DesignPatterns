#include "command.h"

class SimpleRemoteControl
{
public:
    Command* slot;//�и���۳�������,������������һ��װ��
    void setCommand(Command* command);  //�������������������.�����δ���Ŀͻ���Ҫ��θı�ң������ť����Ϊ,
                                    //���Զ�ε����������
    void ButtonPressed();//���°�ťʱ,�������������,ʹ�õ�ǰ�����νӵĲ��,����������execute()����.
};



