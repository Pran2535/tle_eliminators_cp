#include <iostream>
using namespace std;
void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
    cout << "After swapping: a = " << a << " and b = " << b << endl;
    cout << "it is done locally mtlb globally nahi hoga" << endl;
    ;
}

int main()
{
    int a = 10;
    int b = 20;
    swap(a, b);
    cout << a << " " << b << "yahan pe change nahi hoga";
    return 0;
}