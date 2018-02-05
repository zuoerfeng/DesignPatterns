#include <iostream>
#include "Company.h"
using namespace std;

int main()
{
    Company *root = new ConcreteCompany("�ܹ�˾");
    Company *leaf1=new FinanceDepartment("����");
    Company *leaf2=new HRDepartment("������Դ��");
    root->Add(leaf1);
    root->Add(leaf2);

    //�ֹ�˾A
    Company *mid1 = new ConcreteCompany("�ֹ�˾A");
    Company *leaf3=new FinanceDepartment("����");
    Company *leaf4=new HRDepartment("������Դ��");
    mid1->Add(leaf3);
    mid1->Add(leaf4);
    root->Add(mid1);
    //�ֹ�˾B
    Company *mid2=new ConcreteCompany("�ֹ�˾B");
    FinanceDepartment *leaf5=new FinanceDepartment("����");
    HRDepartment *leaf6=new HRDepartment("������Դ��");
    mid2->Add(leaf5);
    mid2->Add(leaf6);
    root->Add(mid2);
    root->Show(0);

    delete leaf1; delete leaf2;
    delete leaf3; delete leaf4;
    delete leaf5; delete leaf6;
    delete mid1; delete mid2;
    delete root;
    return 0;
}
