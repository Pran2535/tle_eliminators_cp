#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if ((a > b) && (b > c))
    {
        cout << c << b << a;
    }
    else if ((b > a) && (a > c))
    {
        cout << c << a << b;
    }
    else
    {
        cout << a << b << c;
    }
    return 0;
}