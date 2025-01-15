#include <iostream>
using namespace std;
void print(int n, int k)
{
    if (k >= n)
    {
        cout << n << endl;
        ;
        return;
    }
    cout << k << endl;
    print(n, k + 1);
}
int main()
{
    int n;
    int k;
    cin >> n >> k;
    print(n, k);
    return 0;
}