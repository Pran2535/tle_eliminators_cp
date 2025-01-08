#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int *p = &a;
    cout << *p << endl; // here  *p is helping us to find the value of data at the address of p;
    cout << *&a;
    return 0;
}