#include <iostream>
using namespace std;

int main()
{
    int arr[5];
    arr[0] = 1;
    arr[1] = 2;
    int *p;
    p = new int[5];
    p[0] = 1;
    p[1] = 2;
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << p[i] << " ";
    }
    delete[] p;
    return 0;
}