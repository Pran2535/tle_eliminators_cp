#include <iostream>
using namespace std;
int findsum(int n)
{
    int totalsum = 0;
    for (int i = 1; i <= n; i++)
    {
        int sum = 0;
        for (int j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                sum = sum + j;
            }
        }
        totalsum = sum + totalsum;
    }
    return totalsum;
}
int main()
{

    return 0;
}