#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;
    if (a + b <= c || b + c <= a || c + a <= b)
    {
        cout << "The triangle cannot be formed";
    }

    else if (a != b && b != c && c != a)
    {
        cout << "The triangle is scalene";
    }
    else if (a == b == c)
    {
        cout << "The triangle is equilateral";
    }
    else
    {
        cout << "The triangle is isosceles";
    }
    return 0;
}