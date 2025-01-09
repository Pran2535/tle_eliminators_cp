#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {1, 23, 25, 45, 13};
    int sum = 0;
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        sum = sum + arr[i];
    }
    cout << "Sum of all elements in the array: " << sum << endl;
    return 0;
}