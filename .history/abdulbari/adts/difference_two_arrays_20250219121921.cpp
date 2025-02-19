#include <iostream>
using namespace std;
void difference(int arr[], int brr[], int crr[], int m, int n)
{
    int k = 0;
    for (int i = 0; i < m; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[i] == brr[j])
            {
                count++;
                break;
            }
        }
        if (count == 0)
        {
            crr[k++] = arr[i];
        }
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int brr[] = {12, 4, 7, 2, 5};
    int crr[11];
    difference(arr, brr, crr, 6, 5);
    for (int i = 0; i < 11; i++)
    {
        cout << crr[i] << " ";
    }
    return 0;
}