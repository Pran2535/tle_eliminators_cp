#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> mm;
    for (int i = 0; i < 15; i++)
    {
        mm.push_back(i);
    }
    vector<int> ll;
    for (int i = mm.size() - 1; i >= 0; i--)
    {
        ll.push_back(mm[i]);
    }
    for (int l = 0; l < ll.size(); l++)
    {
        cout << ll[l] << " ";
    }
    return 0;
}