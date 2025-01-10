#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v;
    cout << "Enter 7 integers:" << endl;

    // Reading 7 integers
    for (int i = 0; i < 7; i++)
    {
        int n;
        cin >> n;
        v.push_back(n);
    }

    int targetSum = 7; // Clarified target sum
    cout << "Pairs of indices with sum " << targetSum << ":" << endl;

    // Finding and printing pairs with the specified sum
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = i + 1; j < v.size(); j++)
        {
            if (v[i] + v[j] == targetSum)
            {
                cout << "(" << i << ", " << j << ")" << endl; // Improved output format
            }
        }
    }

    return 0;
}
