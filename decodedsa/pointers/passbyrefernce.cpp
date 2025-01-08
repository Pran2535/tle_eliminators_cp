#include <iostream>
using namespace std;

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
void swapptr(int &a, int &b)
{
    int *ptr1 = &a;
    int *ptr2 = &b;
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}
int main()
{
    int a = 10;
    int b = 15;
    swapptr(a, b);
    cout << "After swapping: a = " << a << ", b = " << b << endl;

    return 0;
}