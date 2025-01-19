#include <iostream>
#include <vector>
using namespace std;

void rotate(vector<int> &a, int k)
{
    int n = a.size();
    if (n == 0)
        return;

    // Handle k greater than array size
    k = k % n;
    if (k == 0)
        return;

    // Create temporary array of size k
    vector<int> arr(k);

    // Step 1: Store last k elements in reverse order
    for (int i = 0; i < k; i++)
    {
        arr[i] = a[n - i - 1];
    }

    // Step 2: Reverse the stored elements
    for (int i = 0; i < k / 2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[k - 1 - i];
        arr[k - 1 - i] = temp;
    }

    // Step 3: Move the rest of the elements to the right
    for (int i = n - k - 1; i >= 0; i--)
    {
        a[i + k] = a[i];
    }

    // Step 4: Place the stored elements at the start
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

    rotate(mm, 6);

    cout << "\nRotated array: ";
    for (int i = 0; i < mm.size(); i++)
    {
        cout << mm[i] << " ";
    }
    return 0;
}