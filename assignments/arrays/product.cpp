#include <iostream>
using namespace std;
int product(int arr[], int size)
{
    int product = 1;
    for (int i = 0; i < size; i++)
    {
        product = product * arr[i];
    }
    return product;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << product(arr, size) << endl;
    return 0;
}