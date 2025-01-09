#include <iostream>
using namespace std;

void display(int arr[])
{
    int size = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};

    display(arr);
    return 0;
} // we cannot get the size of the array in the other function where it is getting passed because it is passed as references not as values
// so to get the size of the array we need to pass the size of the array along with in the function
