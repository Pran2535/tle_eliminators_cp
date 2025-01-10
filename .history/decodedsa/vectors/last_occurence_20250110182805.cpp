#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int target = 1;
    vector<int> v;
    for (int i = 0; i < 8; i++)
    {
        int n;
        cin >> n;
        v.push_back(n);
    }
    int index = -1;
    for (int i = 0; i < 8; i++)
    {
        if (v[i] == target)
        {
            index = i;
        }
    }
    cout << index;
    return 0;
}