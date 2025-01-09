#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {90, 30, 32, 85, 40};
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        if (arr[i] < 35)
        {
            cout << arr[i] << "marks is less than 35" << endl;
        }
    }
    return 0;
}