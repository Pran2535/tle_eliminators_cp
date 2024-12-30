#include <iostream>
using namespace std;

int main()
{
    int x, y, z;
    cin >> x >> y >> z;
    int l = x;
    int m = y;
    int n = z;
    // Sorting logic
    if (x > y)
        swap(x, y);
    if (x > z)
        swap(x, z);
    if (y > z)
        swap(y, z);

    // Print numbers in sorted order without extra spaces or newlines
    cout << x << endl;
    cout << y << endl;
    cout << z << endl;
    cout << endl;
    cout << l << endl;
    cout << m << endl;
    cout << n << endl;
    return 0;
}
