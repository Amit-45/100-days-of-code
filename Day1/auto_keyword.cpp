/*
Auto keyword automatically detects the type of variable
We can check the type of variable using typeid(variable_name).name()
Header file to use type id is <typeinfo>
*/
#include <iostream>
#include <typeinfo>
using namespace std;

int main()
{
    auto a = 3;
    auto b = 7.3;
    cout << typeid(a).name() << endl;
    cout << typeid(b).name() << endl;
    cout << a + b << endl;

    return 0;
}
