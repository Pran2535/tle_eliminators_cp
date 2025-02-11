#include <iostream>
using namespace std;
int *func(int n)
{
    int *p;
    p = new int[n];
    return p;
}
int main()
{
    int *p;
    p = func(5);
    return 0;
}