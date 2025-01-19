#include <bits/stdc++.h>
using namespace std;
int second_max(int arr[], int size)
{
    int max = INT_MIN;
    int second_max = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    for (int i = 0; i < size; i++)
    {
        if ((arr[i] > second_max) && (arr[i] != max))
        {
            second_max = arr[i];
        }
    }
    return second_max;
}
int main()
{
    int arr[] = {1, 2, 4, 3, 8};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << second_max(arr, size) << endl;
    return 0;
}