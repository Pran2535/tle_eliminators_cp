#include <iostream>
using namespace std;
void print(int n)
{
    if (n >= 10)
    {
        cout << n << endl;
        ;
        return;
    }
    cout << n << endl;
    print(n + 1);
}
int main()
{
    int n;

    return 0;
}