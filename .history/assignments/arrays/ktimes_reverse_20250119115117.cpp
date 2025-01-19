#include <iostream>
#include <vector>
using namespace std;

void rotate(vector<int> &a, int k)
{
    k = k % a.size();
    for (int i = 0; i < k; i++)
    {
        int temp = a[0];
        for (int j = 0; j < a.size() - 1; j++)
        {
            a[j] = a[j + 1];
        }
        a[a.size() - 1] = temp;
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