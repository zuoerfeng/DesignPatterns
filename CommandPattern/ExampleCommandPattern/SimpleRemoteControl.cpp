#include "SimpleRemoteControl.h"

void SimpleRemoteControl::setCommand(Command* command)
{
    this->slot = command;
}

void SimpleRemoteControl::ButtonPressed()
{
    slot->execute();//¶¯Ì¬°ó¶¨
}
