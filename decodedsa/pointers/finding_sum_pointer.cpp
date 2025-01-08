#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int b = 20;
    int *p = &a;
    int *q = &b;
    int c = *p + *q;
    cout << "sum of a and b is " << c << endl;
    return 0;
}