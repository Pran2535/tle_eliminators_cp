#include <iostream>
using namespace std;

int hcf(int a, int b)
{
    while (a != 0)
    {
        int temp = a;
        a = b % a;
        b = temp;
    }
    return b;
}
int lcm(int a, int b)
{
    return (a * b) / hcf(a, b);
}

int main()
{
    int a;
    int b;
    cout << "enter the two numbers";
    cin >> a >> b;
    cout << lcm(a, b);
    return 0;
}