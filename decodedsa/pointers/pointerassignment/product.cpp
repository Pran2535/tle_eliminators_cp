#include <iostream>
using namespace std;

int main()
{
    int a = 10, b = 40;
    int *p1;
    int *p2;
    int *p, q;
    // p is an pointer
    // q is an integer
    p1 = &a;
    p2 = &b;

    int m = 10;
    int n = 20;
    int *ptr = &m;
    n = *ptr + 1;
    ptr = &b;
    cout << *ptr << ' ' << m << ' ' << n << endl;
    cout << "product is " << *p1 * *p2 << endl;
    return 0;
}