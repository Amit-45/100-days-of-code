// Program to build a simple calculator using switch case
#include <iostream>
using namespace std;

int main()
{
    char oper;
    float n1, n2;
    cout << "Enter an operator (+, -, *, /): ";
    cin >> oper;
    cout << "Enter num1 and num2: " << endl;
    cin >> n1 >> n2;

    switch (oper)
    {
    case '+':
        cout << n1 << " + " << n2 << " = " << n1 + n2;
        break;
    case '-':
        cout << n1 << " - " << n2 << " = " << n1 - n2;
        break;
    case '*':
        cout << n1 << " * " << n2 << " = " << n1 * n2;
        break;
    case '/':
        cout << n1 << " / " << n2 << " = " << n1 / n2;
        break;
    default:
        // if operator doesn't match any case constant (+, -, *, /)
        cout << "Error! Invalid operator";
        break;
    }

    return 0;
}
