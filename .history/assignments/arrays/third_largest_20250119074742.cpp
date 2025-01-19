#include <bits/stdc++.h>
using namespace std;

int third_largest(int arr[], int size)
{
    if (size < 3)
    {
        cout << "Array must have at least three elements." << endl;
        return -1; // or handle this case appropriately
    }

    int max1 = INT_MIN, max2 = INT_MIN, max3 = INT_MIN;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max1)
        {
            max3 = max2;
            max2 = max1;
            max1 = arr[i];
        }
        else if (arr[i] > max2 && arr[i] != max1)
        {
            max3 = max2;
            max2 = arr[i];
        }
        else if (arr[i] > max3 && arr[i] != max2 && arr[i] != max1)
        {
            max3 = arr[i];
        }
    }

    return max3;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 6, 9, 11, 14};
    int size = sizeof(arr) / sizeof(arr[0]);

    int result = third_largest(arr, size);
    if (result != -1)
    {
        cout << "The third largest element is: " << result << endl;
    }

    return 0;
}
