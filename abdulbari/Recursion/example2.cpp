#include <iostream>
using namespace std;

void print(int n)
{
    if (n > 0)
    {
        print(n - 1);
        cout << n;
    }
}
int main()
{
    print(3);
    return 0;
}