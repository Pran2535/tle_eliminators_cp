#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> mm;
    mm.push_back(0);
    mm.push_back(1);
    mm.push_back(0);
    mm.push_back(0);
    mm.push_back(1);
    mm.push_back(0);
    mm.push_back(1);
    int no_zero = 0;
    int no_one = 0;
    for (int i = 0; i < mm.size(); i++)
    {
        if (mm[i] == 0)
        {
            no_zero++;
        }
        else if (mm[i] == 1)
        {
            no_one++;
        }
    }
    for (int i = 0; i < no_zero; i++)
    {
        mm[i] = 0;
    }
    for (int i = no_zero; i < mm.size(); i++)
    {
        mm[i] = 1;
    }
    for (int i = 0; i < mm.size(); i++)
    {

        cout << mm[i] << " ";
    }
    return 0;
}