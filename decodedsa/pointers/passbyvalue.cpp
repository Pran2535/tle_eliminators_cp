#include <iostream>
using namespace std;

void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
    cout << "After swapping: a = " << a << " and b = " << b << endl;
}
int main()
{
    int a = 10;
    int b = 20;
    swap(a, b);
    cout << "a = " << a << " and b = " << b << endl;

    return 0;
}