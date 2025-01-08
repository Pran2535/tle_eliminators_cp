#include <iostream>
using namespace std;

int main()
{
    int x = 4;
    int *ptr = &x;
    cout << *ptr << endl; // it will print the value present at address of x
    ptr = ptr + 1;
    cout << *ptr << endl; // it will print the garbage value because it is pointing to a random unknown address

    return 0;
}