#include <iostream>
using namespace std;

int main()
{
    char a[] = "WELCOME";
    int i;
    for (i = 0; a[i] != '\0'; i++)
    {
        a[i] += 32;
    }
    cout << a;
    return 0;
}