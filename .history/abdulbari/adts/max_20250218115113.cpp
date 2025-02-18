#include <iostream>
using namespace std;
int max(int arr[], int size)
{
    int max = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

int main()
{
    int arr[] = {1, 11, 10, 5, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << max(arr, size);
    return 0;
}