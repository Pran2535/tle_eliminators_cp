#include <iostream>
using namespace std;

void merge(int arr[], int brr[], int crr[], int m, int n)
{
    int i = 0, j = 0, k = 0;

    // Merge elements in sorted order, eliminating duplicates
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
        else // If both elements are equal, take only one and move both indices
        {
            crr[k++] = arr[i++];
            j++;
        }
    }

    // Add remaining elements from arr (if any)
    while (i < m)
    {
        crr[k++] = arr[i++];
    }

    // Add remaining elements from brr (if any)
    while (j < n)
    {
        crr[k++] = brr[j++];
    }

    // Store the final size of the merged array
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int brr[] = {4, 5, 6, 7, 8, 9};
    int crr[11]; // Maximum possible size (m + n)
    int size = 0;

    merge(arr, brr, crr, 5, 6);

    // Calculate actual merged size
    size = 5 + 6; // Since the merge removes duplicates, the size might be smaller

    cout << "Merged sorted array (without duplicates): ";
    for (int i = 0; i < size; i++)
    {
        cout << crr[i] << " ";
    }
    cout << endl;

    return 0;
}
