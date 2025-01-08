#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int *ptr = &a;
    int **p = &ptr; // pointer we are defineing to provide the address of the ptr variable and then i
    cout << **p << endl;
    return 0;
}