#include <iostream>
using namespace std;
bool pelindrome_check(int arr[], int n)
{
    for (int i = 0, j = n - 1; i < j; i++)
    {
        if (arr[i] != arr[j])
        {
            return false;
        }
        j--;
    }
    return true;
}

int main()
{
    int arr[] = {1, 2, 1, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << pelindrome_check(arr, n) << endl;
    return 0;
}