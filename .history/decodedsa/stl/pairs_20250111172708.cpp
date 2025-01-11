#include <bits/stdc++.h>
using namespace std;

void explainpairs()
{
    // Basic pair
    pair<int, int> hello = {1, 5};
    cout << "Basic pair:" << endl;
    cout << "First element: " << hello.first << endl
         << "Second element: " << hello.second << endl;

    // Nested pair
    pair<int, pair<int, int>> hello2 = {1, {10, 11}};
    cout << "\nNested pair:" << endl;
    cout << "First element: " << hello2.first << endl
         << "Second element's first element: " << hello2.second.first << endl
         << "Second element's second element: " << hello2.second.second << endl;

    // Pair with different data types
    pair<string, double> hello3 = {"pi", 3.14159};
    cout << "\nPair with different data types:" << endl;
    cout << "First element (string): " << hello3.first << endl
         << "Second element (double): " << hello3.second << endl;

        // Pair with comparison
    pair<int, int> p1 = {2, 3};
    pair<int, int> p2 = {2, 4};
    cout << "\nPair comparison:" << endl;
    if (p1 < p2)
        cout << "p1 is less than p2" << endl;
    else
        cout << "p1 is not less than p2" << endl;

    // Pair swap
    pair<int, int> p3 = {100, 200};
    pair<int, int> p4 = {300, 400};
    cout << "\nBefore swap:" << endl;
    cout << "p3: (" << p3.first << ", " << p3.second << ")" << endl;
    cout << "p4: (" << p4.first << ", " << p4.second << ")" << endl;
    p3.swap(p4);
    cout << "After swap:" << endl;
    cout << "p3: (" << p3.first << ", " << p3.second << ")" << endl;
    cout << "p4: (" << p4.first << ", " << p4.second << ")" << endl;
}

int main()
{
    explainpairs();
    return 0;
}
