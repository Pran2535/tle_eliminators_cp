#include <iostream>
using namespace std;
void shift_Array(int arr[], int size, int k)
{
    k = k % size;
    for (int i = 0; i < size; i++)
    {
        int temp = arr[i];
        arr[i] = arr[(i + k) % size];
        arr[(i + k) % size] = temp;
    }
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int k = 1;
    int n = sizeof(arr) / sizeof(arr[0]);
    shift_Array(arr, n, k);
    return 0;
}