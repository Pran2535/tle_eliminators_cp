#include <bits/stdc++.h>
using namespace std;
void explainpairs()
{
    pair<int, int> hello = {1, 5};
    cout << "pair first element is " << hello.first << endl
         << " second element " << hello.second << endl;
    pair<int, pair<int, int>> hello2 = {1, {10, 11}};
}
int main()
{
    explainpairs();
    return 0;
}