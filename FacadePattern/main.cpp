#include <iostream>
#include "Facade.h"
using namespace std;

int main()
{
    cout << "Hello world!" << endl;

    //����һ����۵Ķ���(ֱ�Ӳ�����װ����ۼ���)
    Facade fa;

    //ʹ����۶������ز���
	fa.wrapOpration();
    return 0;
}
