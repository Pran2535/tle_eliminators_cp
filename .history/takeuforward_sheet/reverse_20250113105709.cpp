#include <iostream>
using namespace std;
int reverse(int x)
{
    int rev = 0;
    while (x != 0)
    {
        int last_digit = x % 10;
        rev = rev * 10 + last_digit;
        x = x / 10;
    }
    return rev;
}
int main()
{
    int x;
    cout << "enter the number to reverse";
    cin >> x;
    cout << reverse(x);
    return 0;
}