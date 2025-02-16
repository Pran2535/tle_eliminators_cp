#include <iostream>
using namespace std;
void print(int n)
{
    if (n > 0)
    {
        cout << n << endl;
        print(n - 1);
    }
}
int main()
{
    print(6);
    return 0;
}