#include <iostream>
using namespace std;
int min(int arr[], int size)
{
    int min = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}
int main()
{
    int arr[] = {4, 5, 6, 1, 2, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << min(arr, n) << endl;
    return 0;
}