#include <iostream>
using namespace std;
int greater(int arr[], int size, int target)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > target)
        {
            count++;
        }
    }
    return count;
}
int main()
{
    int arr[] = {1, 2, 3, 5, 10, 11, 22, 15};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target;
    cin >> target;
    int result = greater(arr, n, target);
    cout << "Number of elements greater than " << target << " are: " << result << endl;
    return 0;
}