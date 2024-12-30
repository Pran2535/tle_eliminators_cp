#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if ((a + b > c) && (b + c > a) && (a + c > b))
    {
        cout << "triangle is valid" << endl;
    }
    else
    {
        cout << "triangle is not valid" << endl;
    }
    return 0;
}