#include <iostream>
using namespace std;

int main()
{
    // int arr[5] = {1, 2, 3, 4, 5};
    // int *ptr = arr;
    // int size = sizeof(arr) / sizeof(arr[0]);
    // for (int i = 0; i < size; i++)
    // {
    //     cout << ptr[i] << ",";
    // }
    int arr[5] = {1, 3, 5, 6, 10};
    int *ptr = arr;
    for (int i = 0; i < 5; i++)
    {
        cout << *ptr << " ";
        ptr++;
    }

    return 0;
}