#include "command.h"

void Light::on(){
    cout<<"light on!"<<endl;
}

void Light::off(){
    cout << "light off" <<endl;
}

LightOnCommand::LightOnCommand(Light* light)
{
    this->light = light;
}

void LightOnCommand::execute()
{
    light->on();
}
