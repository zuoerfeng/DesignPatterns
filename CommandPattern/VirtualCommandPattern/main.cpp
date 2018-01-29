#include <iostream>
#include "Invoker.h"

using namespace std;

int main()
{
    cout << "Hello world!" << endl;

    Invoker *a = new Invoker();
    receiver *b = new receiver();
    ConcreteCommand *c = new ConcreteCommand(b);

    a->setcommand(c);
    a->call();

    return 0;
}
