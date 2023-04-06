#include <iostream>
using namespace std;
int main()
{
    int  n1, n2;
    cout << "enter the value of n1: "<<endl;
    cin >> n1;
    cout<<"enter the value of n2: "<<endl;
    cin>> n2;
    char op;
    cout << "input an operator";
    cin >> op;
    switch (op)
    {
    case '+':
        cout << n1 + n2 << endl;
        break;
    case '-':
        cout << n1 - n2 << endl;
        break;
    case '*':
        cout << n1 * n2 << endl;
        break;
    case '/':
        cout << n1 / n2 << endl;
        break;
        case '%':
        cout<<n1%n2<<endl;

    default:
        cout << "Enter another number" << endl;
        break;
    }
    return 0;
}