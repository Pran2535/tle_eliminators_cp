#include <iostream>
using namespace std;

int main()
{
    // int x = 4;
    // int *ptr = &x;
    // cout << *ptr << endl; // it will print the value present at address of x
    // ptr = ptr + 1;
    // cout << *ptr << endl; // it will print the garbage value because it is pointing to a random unknown address

    int a = 15;
    int *ptr = &a;
    int b = ++*ptr;
    cout << a << " " << b;

    return 0;
}