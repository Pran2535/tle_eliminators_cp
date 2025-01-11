#include <bits/stdc++.h>
using namespace std;
void explainpairs()
{
    pair<int, int> hello = {1, 5};
    cout << "pair first element is " << hello.first << endl
         << " second element " << hello.second << endl;
    pair<int, pair<int, int>> hello2 = {1, {10, 11}};
    cout << "pair first element is " << hello2.first << endl
         << " second element first element is " << hello2.second.first << endl
         << " second element second element is " << hello2.second.second << endl;
}
int main()
{
    explainpairs();
    return 0;
}