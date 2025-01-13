#include <iostream>
using namespace std;
bool check(int x)
{
    int temp = x;
    int reverse = 0;
    while (temp > 0)
    {
        int remainder = temp % 10;
        reverse = reverse * 10 + remainder;
        temp = temp / 10;
    }
    if (reverse == x)
    {
        return true;
    }
    return false;
}
int main()
{
    int x;
    cout << "enter the number to check pelindrome";
    cin >> x;
    cout << bool(x);
    return 0;
}