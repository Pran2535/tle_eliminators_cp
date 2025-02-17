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
int main()
{
    struct Array arr = {{2, 3, 4, 5, 6}, 20, 5};
    display(arr);
    return 0;
}