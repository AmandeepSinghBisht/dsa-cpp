#include <iostream>
using namespace std;
int main()
{
    int n1, n2;
    cout << "Enter any two number: ";
    cin >> n1 >> n2;
    char op;
    cout << "Enter the operator: ";
    cin >> op;
    switch (op)
    {
    case '+':
        cout << n1 + n2;
        break;
    case '-':
        cout << n1 - n2;
        break;
    case '*':
        cout << n1 * n2;
        break;
    case '/':
        cout << n1 / n2;
        break;
    default:
        cout << "nah broh";
        break;
    }
}