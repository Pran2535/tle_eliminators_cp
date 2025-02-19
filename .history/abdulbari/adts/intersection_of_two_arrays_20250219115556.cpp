#include <iostream>
using namespace std;

void mergee_intersect(int arr[], int brr[], int crr[], int m, int n, int &size)
{
    int k = 0;
    for (int i = 0; i < m; i++) // Corrected loop: iterate `m` times for `arr`
    {
        for (int j = 0; j < n; j++) // Iterate over `brr`
        {
            if (arr[i] == brr[j])
            {
                crr[k++] = arr[i];
                break; // Avoid duplicate matches for the same element
            }
        }
    }
    size = k; // Store actual size of intersection
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 8};
    int brr[] = {4, 5, 1, 2, 3, 6, 7, 8};
    int crr[6]; // The intersection set will be at most `min(m, n)`
    int size = 0;

    mergee_intersect(arr, brr, crr, 6, 8, size);

    cout << "Intersection of arrays: ";
    for (int i = 0; i < size; i++) // Print only valid elements
    {
        cout << crr[i] << " ";
    }
    cout << endl;

    return 0;
}
