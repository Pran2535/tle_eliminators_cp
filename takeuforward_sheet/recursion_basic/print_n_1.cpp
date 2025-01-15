#include <iostream>
using namespace std;
void print(int n)
{
    if (n < 0)
    {
        return;
    }
    cout << n << endl;
    print(n - 1); //
}
void print_backtrack(int n, int i)
{
    if (i > n)
    {
        return;
    }
    print_backtrack(n, i + 1);
    cout << i << endl;
}

int main()
{
    int n;
    cin >> n;
    print(n);
    print_backtrack(n, 1);
    return 0;
}