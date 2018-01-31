#include <iostream>
#include "Template.h"

using namespace std;

int main()
{
    cout << "Hello world!" << endl;

    CaffeineBeverage* caffeineBeverage = new Tea();
    caffeineBeverage->prepareRecipe();

    cout << endl;

    caffeineBeverage = new Coffee();
    caffeineBeverage->prepareRecipe();

    return 0;
}
