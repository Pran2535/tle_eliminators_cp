#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int arr[6] = {1, 2, 3, 6, 5};
    int max = INT_MIN;
    int Sec_max = INT_MIN;

    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        if ((arr[i] > Sec_max) && (max != arr[i]))
        {
            Sec_max = arr[i];
        }
    }
    cout << "Second Maximum element is " << Sec_max << endl;
    return 0;
}