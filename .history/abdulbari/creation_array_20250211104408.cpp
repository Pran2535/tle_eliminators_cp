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
    for (int i = 0; i < 5; i++)
    {
        p[i] = i + 1;
    }
    for (int i = 0; i < 5; i++)
    {
        cout << p[i] << " ";
    }
    return 0;
}