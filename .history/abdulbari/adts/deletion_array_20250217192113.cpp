#include <iostream>
using namespace std;

void deletion(int index, int arr[], int size)
{
    if (index >= size)
    {
        return;
    }
    for (int i = index; i < size; i++)
    {
        arr[i] = arr[i + 1];
    }
    arr[size - 1] = 0;
}
void display(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    int index;
    cout << "Enter the index you want to delete: ";
    cin >> index;
    display(arr, size);
    deletion(index, arr, size);
    cout << endl;
    display(arr, size);

    return 0;
}