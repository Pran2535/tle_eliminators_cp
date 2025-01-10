#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    vector<int> l(n);
    int j = v.size() - 1;
    int i = 0;
    while (j >= 0)
    {
        l[i] = v[j];
        i++;
        j--;
    }
    for (int i = 0; i < n; i++)
    {
        cout << l[i] << " ";
    }
    {
        /* code */
    }

    return 0;
}