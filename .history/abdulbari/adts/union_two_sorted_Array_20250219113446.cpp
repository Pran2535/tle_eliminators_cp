#include <iostream>
using namespace std;
void merge(int arr[], int brr[], int crr[], int m, int n)
{
    int i = 0;
    int j = 0;
    int k = 0;
    while (i < m && j < n)
    {
        if (arr[i] < brr[j])
        {
            crr[k++] = arr[i++];
        }
        else if (brr[j] < arr[i])
        {
            crr[k++] = brr[j++];
        }
        else
        {

            crr[k++] = arr[i++];
            j++;
            // i++;
        }
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int brr[] = {4, 5, 6, 7, 8, 9};
    int crr[11];
    merge(arr, brr, crr, 5, 6);
    for (int i = 0; i < 11; i++)
    {
        cout << arr[i] << ",";
    }

    return 0;
}