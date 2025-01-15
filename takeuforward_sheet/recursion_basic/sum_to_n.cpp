#include <iostream>
using namespace std;
void print(int n, int sum)
{
    if (n == 0)
    {
        cout << sum << endl;
        return;
    }
    sum = sum + n;
    print(n - 1, sum);
}
int main()
{
    int n;
    cin >> n;
    int sum = 0;
    print(n, sum);
    return 0;
}