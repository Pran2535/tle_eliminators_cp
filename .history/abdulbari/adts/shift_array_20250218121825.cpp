#include <iostream>
using namespace std;

// Function to shift array elements to the right by k positions
void shift_Array(int arr[], int size, int k)
{
    k = k % size; // Handle cases where k > size

    int temp[size]; // Temporary array to store shifted values

    // Copy last k elements to the front
    for (int i = 0; i < k; i++)
    {
        temp[i] = arr[size - k + i];
    }

    // Shift the remaining elements to the right
    for (int i = size - 1; i >= k; i--)
    {
        arr[i] = arr[i - k];
    }

    // Copy stored elements back to the array
    for (int i = 0; i < k; i++)
    {
        arr[i] = temp[i];
    }

    // Print the shifted array
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int k = 1;
    int n = sizeof(arr) / sizeof(arr[0]);

    shift_Array(arr, n, k);
    return 0;
}
