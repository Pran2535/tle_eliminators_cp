#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v;
    for (int i = 0; i < 7; i++)
    {
        int n;
        cin >> n;
        v.push_back(n);
    }
    int sum = 7;
    for (int i = 0; i < 7; i++)
    {
        for (int j = i + 1; j < 7; j++)
        {
            if (v[i] + v[j] == sum)
            {
                cout << "(" << i << " , " << j << ")";
            }
        }
    }
    return 0;
}