#include <iostream>
using namespace std;
int search(int arr[], int low, int high, int target)
{
    if (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == target)
        {
            return mid;
        }
        if (arr[mid] > target)
        {
            return search(arr, low, mid - 1, target);
        }
        return search(arr, mid + 1, high, target);
    }
    return -1;
}
int main()
{
    int arr[] = {1, 2, 5, 10, 15, 25};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << search(arr, 0, n - 1, 20);
    return 0;
}