#include <iostream>
using namespace std;

class Singleton{

public:
    //���徲̬�ĺ�����ֻ�ܷ��ʾ�̬�ı�������Ϊ��̬��Ա�洢�ڶ��У�
    static Singleton* getInstance()
    {
        // �ں����Singletonʵ����ʼ��ʱ����������new Singleton()����˴�����new�����ϻ���
        // �������Ǹ�ֵ��NULL����˴���Ҫ�жϣ���Ҫʱnew
        // ע�⣡Ȼ�������ַ�ʽ�����ȼۣ������Singletonʵ����ʼ��ʱ��new Singleton(),��ʵ���̰߳�ȫ�ģ���Ϊstatic��ʼ������������main()֮ǰ����ô����ķ������Ǻ��鷳����������Ҳ���Ҳ��Ե�ʱ���뵽��

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
    Singleton(){}    //˽�еĹ��캯������֤һ����ֻ��һ��ʵ��
    static Singleton* m_pInstance;
};

//����Singleton�����о�̬�ĳ�Ա����̬�ĳ�Ա����ͨ�����캯����ʼ���ģ�һ����ͨ����������ͨ��ȫ����ʼ���ģ���̬��Ա�ĳ�ʼ�����ÿ���˽��private
//Singleton* Singleton::m_pInstance = new Singleton(); // ǰ�治�ܼ�static���������ȫ��static����
