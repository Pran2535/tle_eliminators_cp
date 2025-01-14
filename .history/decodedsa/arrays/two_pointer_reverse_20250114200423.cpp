#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> mm;
    for (int i = 0; i < 15; i++)
    {
        mm.push_back(i);
    }
    int j = mm.size() - 1;
    int i = 0;
    while (i < j)
    {
        int temp = mm[i];
        mm[i] = mm[j];
        mm[j] = temp;
        i++;
        j--;
    }
    for (auto x : mm)
    {
        cout << x << " ";
    }
    return 0;
}