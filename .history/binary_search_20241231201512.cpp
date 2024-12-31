#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int target = 5;
    cout << search(arr, target);
    return 0;
}
int search(int arr[], int target)
{
    int low = 0;
    int high = sizeof(arr) / sizeof(arr[0]) - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}