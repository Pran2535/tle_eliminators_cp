#include <iostream>
using namespace std;
void insert_in_a_sorted(int arr[], int element, int size)
{
    int i = 0;
    for (i = 0; i < size; i++)
    {
        if (arr[i] > element)
        {
            break;
        }
    }
    i--;
    int j = i;
    for (i; i < size; i++)
    {
        arr[i + 1] = arr[i];
        arr[j] = element;
    }
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 11, 12, 14, 16, 0, 0, 0};
    int element = 13;
    int size = sizeof(arr) / sizeof(arr[0]);
    insert_in_a_sorted(arr, element, size);
    return 0;
}