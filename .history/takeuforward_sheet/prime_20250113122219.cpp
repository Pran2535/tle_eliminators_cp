#include <iostream>
using namespace std;

bool check_prime(int n)
{
    if (n <= 1)
    {
        return false;
    }
    int count = 0;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }
    if (count == 0)
    {
        return true;
    }
    return false;
}
int main()
{
    cout << check_prime(11);
    return 0;
}