#include <iostream>
using namespace std;

int main()
{
    int arr[] = {40, 30, 32, 85, 34, 97};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 35)
        {
            cout << i << endl;
        }
    }
    return 0;
}