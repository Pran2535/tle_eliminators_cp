#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {1, 2, 3, 4, 8};
    int n;
    cout << "enter the target element";
    cin >> n;
    int size = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == n)
        {
            cout << "Element found at index " << i;
            break;
        }
    }

    return 0;
}