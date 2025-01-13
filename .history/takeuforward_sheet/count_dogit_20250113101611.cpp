#include <iostream>
using namespace std;
int count(int n)
{
    int m = n;
    int count = 0;
    while (n > 0)
    {
        int last_digit = n % 10;
        if (last_digit != 0)
        {
            if (m % last_digit == 0)
            {
                count++;
            }
        }
        n = n / 10;
    }
    return count;
}
int main()
{
    cout << count(12);
    return 0;
}