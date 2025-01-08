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
    return 0;
}