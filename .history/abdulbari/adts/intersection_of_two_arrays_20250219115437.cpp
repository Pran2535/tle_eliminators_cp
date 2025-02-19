#include <iostream>
using namespace std;
void mergee_intersect(int arr[], int brr[], int crr[], int m, int n)
{
    int k = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i] == brr[j])
            {
                crr[k++] = arr[i];
                break;
            }
        }
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 8};
    int brr[] = {4, 5, 1, 2, 3, 6, 7, 8};
    int crr[13];
    mergee_intersect(arr, brr, crr, 6, 8);
    for (int i = 0; i < 13; i++)
    {
        cout << crr[i] << " ";
    }
    return 0;
}