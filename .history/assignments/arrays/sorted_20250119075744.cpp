#include <iostream>
using namespace std;
bool sorted_check(int arr[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            count++;
            break;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < arr[i + 1])
        {
            count++;
            break;
        }
    }
    if (count == 2)
    {
        return false;
    }
    else
    {
        return true;
    }
}
int main()
{
    int arr[] = {1, 2, 44, 15, 18};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << sorted_check(arr, n);
    return 0;
}