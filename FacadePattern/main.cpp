#include <iostream>
#include "Facade.h"
using namespace std;

int main()
{
    cout << "Hello world!" << endl;

    //创建一个外观的对象，(直接操作封装的外观即可)
    Facade fa;

    //使用外观对象的相关操作
	fa.wrapOpration();
    return 0;
}
