#include <iostream>
using namespace std;
int factorial(int x)
{
    int result = 1;
    for (int i = 1; i <= x; i++)
    {
        result *= i;
    }
    return result;
}
int main()
{
    // finding combination
    int combination;
    int n;
    int r;
    cin >> n;
    cin >> r;
    combination = factorial(n) / (factorial(r) * factorial(n - r));
    cout << combination;
    return 0;
}