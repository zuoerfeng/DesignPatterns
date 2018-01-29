#include <iostream>
#include "SimpleRemoteControl.h"

using namespace std;

int main()
{
    cout << "Hello world!" << endl;

    //��ʼ��һң����
    SimpleRemoteControl* remote = new SimpleRemoteControl();//����ң����,���ǵ�����

    //��ʼ��һ���������ƵĿ���
    Light* light = new Light();//������ȶ���,�ζ��������������Ľ�����

    //�����������װ�����������У�����һ�����ƹصƵ��������
    LightOnCommand* lightOn = new LightOnCommand(light);//����һ������,Ȼ�󽫽����ߴ�����

    //��������ɵ�������󴫵ݸ�������
    remote->setCommand(lightOn);//�������������

    //������ʹ���������
    remote->ButtonPressed();//ģ�ⰴ�°�ť

    delete remote;
    delete light;
    delete lightOn;
    return 0;
}
