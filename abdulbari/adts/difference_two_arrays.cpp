#include <iostream>
using namespace std;

void difference(int arr[], int brr[], int crr[], int m, int n, int &size)
{
    int k = 0;
    for (int i = 0; i < m; i++)
    {
        bool found = false; // Flag to check if element exists in `brr`
        for (int j = 0; j < n; j++)
        {
            if (arr[i] == brr[j])
            {
                found = true;
                break; // Stop searching if found
            }
        }
        if (!found)
        {
            crr[k++] = arr[i];
        }
    }
    size = k; // Store actual size of the difference array
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int brr[] = {12, 4, 7, 2, 5};
    int crr[6]; // The result will be at most `m`
    int size = 0;

    difference(arr, brr, crr, 6, 5, size);

    cout << "Difference (arr - brr): ";
    for (int i = 0; i < size; i++) // Print only valid elements
    {
        cout << crr[i] << " ";
    }
    cout << endl;

    return 0;
}
