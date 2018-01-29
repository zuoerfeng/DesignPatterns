#include <iostream>
using namespace std;

class Singleton{

public:
    //定义静态的函数（只能访问静态的变量，因为静态成员存储在堆中）
    static Singleton* getInstance()
    {
        // 在后面的Singleton实例初始化时，若后面是new Singleton()，则此处不必new；（废话）
        // 若后面是赋值成NULL，则此处需要判断，需要时new
        // 注意！然而这两种方式并不等价！后面的Singleton实例初始化时，new Singleton(),其实是线程安全的，因为static初始化是在主函数main()之前，那么后面的方法岂不是很麻烦。。。。这也是我测试的时候想到的

        if(m_pInstance == NULL)
        {
        m_pInstance = new Singleton();
        }

        return m_pInstance;
    }

    static void destroyInstance()
    {
        if (m_pInstance != NULL)
        {
            delete m_pInstance;
            m_pInstance = NULL;
        }
    }

private:
    Singleton(){}    //私有的构造函数，保证一个类只有一个实例
    static Singleton* m_pInstance;
};

//由于Singleton包含有静态的成员，静态的成员不是通过构造函数初始化的，一般是通过在类外面通过全部初始化的，静态成员的初始化不用考虑私有private
//Singleton* Singleton::m_pInstance = new Singleton(); // 前面不能加static，会和类外全局static混淆
