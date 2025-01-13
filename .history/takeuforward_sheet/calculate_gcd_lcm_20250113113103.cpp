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

int main()
{
    int a;
    int b;
    cout << "enter the two numbers";
    cin >> a >> b;
    cout << hcf(a, b);
    return 0;
}