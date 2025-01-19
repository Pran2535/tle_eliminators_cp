#include <bits/stdc++.h>
using namespace std;
int count(int arr[], int size)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
                break;
            }
        }
    }
    return count;
}
int main()
{
    int arr[] = {1, 2, 1, 1, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    int result = count(arr, size);
    if (result > 0)
    {
        cout << "contain duplicates" << endl;
    }
    else
    {
        cout << "doesn't contain duplicates" << endl;
    }
    return 0;
}