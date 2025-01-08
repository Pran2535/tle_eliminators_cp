#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int *ptr = &a;
    ptr = NULL;

    cout << *ptr;
    return 0;
}