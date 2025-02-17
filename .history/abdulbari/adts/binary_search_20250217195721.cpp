#include <iostream>
using namespace std;
int binary_search(int arr[], int target, int low, int high)
{

    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == target)
            return mid;
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
int main()
{
    int arr[] = {1, 2, 11, 13, 18, 21};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 100;
    cout << binary_search(arr, target, 0, n - 1);
    return 0;
}