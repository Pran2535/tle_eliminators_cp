#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int *ptr = &a;
    *ptr = nullptr;
    cout << *ptr;
    return 0;
}