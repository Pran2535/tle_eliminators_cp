#include <iostream>
using namespace std;
void fun(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}

void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[]{1, 2, 3, 4, 5};
    fun(arr, 5);
    fun(arr, sizeof(arr) / sizeof(arr[0]));
    return 0;
}