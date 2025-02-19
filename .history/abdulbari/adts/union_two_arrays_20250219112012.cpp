#include <iostream>
using namespace std;

void union_two(int arr[], int brr[], int crr[], int m, int n, int &size)
{
    int k = 0;

    // Copy all elements from arr to crr
    for (int i = 0; i < m; i++)
    {
        crr[k++] = arr[i];
    }

    // Add elements from brr that are not already in crr
    for (int i = 0; i < n; i++)
    {
        bool isDuplicate = false;
        for (int j = 0; j < k; j++) // Check against crr
        {
            if (brr[i] == crr[j]) // If found, mark as duplicate
            {
                isDuplicate = true;
                break;
            }
        }
        if (!isDuplicate)
        {
            crr[k++] = brr[i]; // Add to crr only if it's unique
        }
    }

    size = k; // Store the final size of the union array
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int brr[] = {4, 5, 6, 7, 8, 9};
    int crr[11]; // Maximum possible size (m + n)
    int size = 0;

    union_two(arr, brr, crr, 5, 6, size);

    cout << "Union of arrays: ";
    for (int i = 0; i < size; i++)
    {
        cout << crr[i] << " ";
    }
    cout << endl;

    return 0;
}
