#include <iostream>
#include <vector>
using namespace std;

void rotate(vector<int> &a, int k)
{
    k = k % a.size();
    int arr[k];

    for (int i = 0; i < k; i++)
    {
        arr[i] = a[a.size() - i - 1];
    }
    for (int i = 0; i < k; i++)
    {
        int temp = arr[i];
        arr[i] = arr[k - i];
        arr[k - i] = temp;
    }
    for (int i = 0; i < k; i++)
    {
        a[a.size() - i - 1] = arr[a.size() - i - 2];
    }
    for (int i = 0; i < k; i++)
    {
        a[i] = arr[i];
    }
}
int main()
{
    vector<int> mm;
    for (int i = 0; i < 6; i++)
    {

        mm.push_back(i);
    }
    cout << "Original array: ";
    for (int i = 0; i < mm.size(); i++)
    {
        cout << mm[i] << " ";
    }
    rotate(mm, 2);
    cout << "\nRotated array: ";
    for (int i = 0; i < mm.size(); i++)
    {
        cout << mm[i] << " ";
    }
    return 0;
}