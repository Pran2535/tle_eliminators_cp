#include <iostream>
using namespace std;

int main()
{
    int a = 100;
    int b = 200;
    int *p = &a;
    int *q = &b;
    int c;
    c = *q - *p;
    cout<<"difference of the  a and b is "<<c;
    return 0;
}