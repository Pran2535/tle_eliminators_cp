#include <bits/stdc++.h>
using namespace std;
int second_min(int arr[], int size)
{
    int second_min = INT_MAX;
    int min = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    for (int i = 0; i < size; i++)
    {
        if ((arr[i] < second_min) && (arr[i] != min))
        {
            second_min = arr[i];
        }
    }
    return second_min;
}

int main()
{
    int arr[] = {1, 2, 4, 8, 11, 16};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << second_min(arr, size);
    return 0;
}