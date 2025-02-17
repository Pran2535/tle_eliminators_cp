#include <iostream>
using namespace std;
int find(int arr[], int element, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << find(arr, 7, n);
    return 0;
}