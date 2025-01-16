#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int *p = &a;
    cout << p << endl;  // p is the pointer here and then  the pointer declared here i want to get the address here
    cout << *p << endl; // dereference operator it helps in the case of getting the output of answer
    return 0;
}