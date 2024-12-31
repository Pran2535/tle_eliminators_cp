#include <iostream>
using namespace std;

// Declare the search function prototype
int search(int arr[], int size, int target)
{
    int low = 0;
    int high = size - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (arr[mid] == target)
        {
            return mid; // Target found, return index
        }
        else if (arr[mid] < target)
        {
            low = mid + 1; // Move to the right half
        }
        else
        {
            high = mid - 1; // Move to the left half
        }
    }
    return -1; // Target not found
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int target = 5;
    int size = sizeof(arr) / sizeof(arr[0]); // Calculate size in main
    int result = search(arr, size, target);

    if (result != -1)
        cout << "Element found at index: " << result << endl;
    else
        cout << "Element not found" << endl;

    return 0;
}
