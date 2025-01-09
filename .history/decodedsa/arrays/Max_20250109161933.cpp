#include <iostream>
#include <math.h>
#include <climits>

using namespace std;

int main()
{
    int arr[5] = {1, 3, 10, 22, 12};
    int max = INT_MIN;
    int size = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            ;
        }
    }
    cout << "Maximum element is " << max << endl;
    return 0;
}