#include <iostream>
using namespace std;
void check(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            cout << "Element found at index " << i << endl;
            return;
        }
    }
    cout << "Element not found in array" << endl;
    return;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    check(arr, size, 6);
    return 0;
}