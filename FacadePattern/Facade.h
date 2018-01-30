#ifndef _FACADE_H
#define _FACADE_H
#include <iostream>

using  namespace std;

class SystemA;
class SystemB;
class SystemC;

class Facade
{
public:
    Facade();
    virtual ~Facade();
    void wrapOpration();

private:
	SystemA *m_SystemA;
	SystemB *m_SystemB;
    SystemC *m_SystemC;
};

class SystemA
{
public:
    SystemA(){}
    ~SystemA(){}
    void operationA(){cout << "operationA" << endl;}
};

class SystemB
{
public:
    SystemB(){}
    ~SystemB(){}
    void operationB(){cout << "operationB" << endl;}
};

class SystemC
{
public:
    SystemC(){}
    ~SystemC(){}
    void operationC(){cout << "operationC" << endl;}
};

#endif // _FACADE_H
