#include <iostream>
using namespace std;

int Ap(int n, int a, int d)
{
    int nth = a * n + d;
    return nth;
}

int main()
{

    int n;
    int a = 3;
    int d = 7;
    cin >> n;
    cout << "the nth term is " << Ap(n, a, d);
}