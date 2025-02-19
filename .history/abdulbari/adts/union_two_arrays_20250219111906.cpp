#include <iostream>
using namespace std;
void union_two(int arr[], int brr[], int crr[], int m, int n)
{
    int total = m + n;
    int k = 0;
    for (int i = 0; i < m; i++)
    {
        crr[k++] = arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < m; j++)
        {
            if (crr[i] == arr[j])
            {
                count++;
                break;
            }
        }
        if (count == 0)
        {
            crr[k++] = brr[i];
        }
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int brr[] = {4, 5, 6, 7, 8, 9};
    int crr[11];
    union_two(arr, brr, crr, 5, 6);
    for (int i = 0; i < 11; i++)
    {
        cout << crr[i] << ",";
    }
    return 0;
}