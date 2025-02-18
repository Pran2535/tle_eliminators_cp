#include <iostream>
using namespace std;

int sum(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    cout << sum(arr, sizeof(arr) / sizeof(arr[0]));
    return 0;
}