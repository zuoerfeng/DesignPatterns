#ifndef _PROXY_H_
#define _PROXY_H_

// ������Proxy��ConcreteSubject�Ĺ��нӿ�,
// �����Ϳ������κ���Ҫʹ�õ�ConcreteSubject�ĵط���ʹ��Proxy.
class Subject
{
public:
    virtual ~Subject();
    virtual void Request()=0;    //���麯������ɽӿڹ���
protected:
    Subject();
};

class ConcreteSubject : public Subject
{
public:
    ConcreteSubject();
    ~ConcreteSubject();
    virtual void Request();
};

//���������
class Proxy : public Subject
{
public:
    Proxy();
    ~Proxy();
    void DoSomething1();
    virtual void Request();
    void DoSomething2();
private:
    Subject* _subject;
};
#endif
