#include <iostream>
#include <vector>
using namespace std;
void sort(int arr[], int size)
{
    int count_zeroes = 0;
    int count_ones = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 0)
        {
            count_zeroes++;
        }
    }
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 1)
        {
            count_ones++;
        }
    }
    for (int i = 0; i < count_zeroes; i++)
    {
        arr[i] = 0;
    }
    for (int i = count_zeroes; i < size; i++)
    {
        arr[i] = 1;
    }
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << ",";
    }
}
int main()
{
    int arr[5] = {0, 1, 1, 0, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    sort(arr, size);
    return 0;
}