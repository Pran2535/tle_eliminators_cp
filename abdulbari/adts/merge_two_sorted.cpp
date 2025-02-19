#include <iostream>
using namespace std;

void merge(int arr[], int brr[], int newarr[], int n, int m)
{
    int i = 0;
    int j = 0;
    int k = 0;
    while (i < n && j < m)
    {
        if (arr[i] < brr[j])
        {
            newarr[k++] = arr[i++];
        }
        else
        {
            newarr[k++] = brr[j++];
        }
    }
    for (; i < n; i++)
    {
        newarr[k++] = arr[i++];
    }
    for (; j < m; j++)
    {
        newarr[k++] = brr[j++];
    }
}
int main()
{
    int arr[] = {1, 3, 8, 16, 20, 25};
    int brr[] = {4, 10, 12, 22, 23};
    int n = (sizeof(arr) / sizeof(arr[0])) + (sizeof(brr) / sizeof(brr[0]));
    int arrnew[n];
    merge(arr, brr, arrnew, 6, 5);
    for (int i = 0; i < n; i++)
    {
        cout << arrnew[i] << ",";
    }
    return 0;
}