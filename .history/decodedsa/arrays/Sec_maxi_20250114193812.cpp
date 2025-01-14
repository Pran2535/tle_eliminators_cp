#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {1, 2, 34, 26, 36};
    int max = INT_MIN;
    int sec_max = INT_MIN;
    int size = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > sec_max && arr[i] != max)
        {
            sec_max = arr[i];
        }
    }
    return 0;
}