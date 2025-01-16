#include <iostream>
using namespace std;

int count(int arr[], int size)
{
    int count = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 1)
        {
            count++;
        }
    }
    return count;
}
int main()
{
    int arr[] = {1, 2, 1, 3, 4, 5};
    cout << count(arr, 6);
    return 0;
}