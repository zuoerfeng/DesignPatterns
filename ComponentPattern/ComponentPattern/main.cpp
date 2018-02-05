#include <iostream>
#include "Composite.h"
using namespace std;

int main()
{
    /*
      ������Ҷ��Leaf����Composite����pRoot��pCom��ʵ����Operation�ӿڣ����Կ���һ�¶Դ���ֱ�ӵ���Operation()
      �����ˡ�ʹ���û��Ե����������϶����ʹ�þ���һ���ԡ���
    */
    Composite* pRoot = new Composite();

    //��϶������Ҷ�ӽڵ�
    pRoot->Add(new Leaf());

    Leaf* pLeaf1 = new Leaf();
    Leaf* pLeaf2 = new Leaf();

    //�����Ҷ�������Ҷ����û������ġ�
    //����Ҷ������϶���̳�����ͬ�Ľӿڣ������﷨���ǶԵģ�ʵ����ʲôҲû��(�̳��Ի���Component��Add����)��
    //Ҷ�ӽڵ�ֻʵ����Operation����������Add��Remove��GetChild���̳��Ի��࣬û��ʵ�����塣
    pLeaf1->Add(pLeaf2);
    pLeaf1->Remove(pLeaf2);
    //ִ��Ҷ��Operation����
    pLeaf1->Operation();
    cout << endl;


    //��϶���ʵ���˻���Component�����нӿڣ����Կ��������ֲ���(Add��Remove��GetChild��Operation)��
    Composite* pCom = new Composite();
    //��϶������Ҷ�ӽڵ�
    pCom->Add(pLeaf1);
    //��϶������Ҷ�ӽڵ�
    pCom->Add(pLeaf2);
    //ִ����϶���Operation����
    pCom->Operation();
    cout << endl;

    //��϶��������϶���
    pRoot->Add(pCom);

    //ִ����϶���Operation����
    pRoot->Operation();
    cout << endl;

    Component* cp = pCom->GetChild(0);
    cp->Operation();
    cout << endl;

    cp = pRoot->GetChild(1);
    cp->Operation();
    cout << endl;

    pCom->Remove(pLeaf1);
    pRoot->Operation();
    cout << endl;

    return 0;
}
