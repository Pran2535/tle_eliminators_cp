#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int *ptr = &a;
    ptr = NULL;
    ptr = &a;
    cout << *ptr;
    return 0;
}