#include <iostream>
using namespace std;

struct Array
{
    int A[20];
    int size;
    int length;
};
void display(struct Array arr)
{
    int i;
    cout << "elements are ";
    for (i = 0; i < arr.length; i++)
    {
        cout << arr.A[i] << " ";
    }
}
void insert(struct Array arr, int index, int data)
{
    for (int i = arr.length; i > index; i--)
    {
        arr.A[i] = arr.A[i - 1];
    }
    arr.A[index] = data;
    arr.length++;
}
int main()
{
    struct Array arr = {{2, 3, 4, 5, 6}, 20, 5};
    display(arr);
    cout << endl;
    insert(arr, 2, 10);
    display(arr);
    return 0;
}