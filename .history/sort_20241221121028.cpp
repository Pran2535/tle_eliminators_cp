#include <iostream>
using namespace std;

int main()
{
    int x, y, z;
    cin >> x >> y >> z;

    // Sorting logic
    if (x > y)
        swap(x, y);
    if (x > z)
        swap(x, z);
    if (y > z)
        swap(y, z);

    // Print numbers in sorted order
    cout << x << endl
         << y << endl
         << z << endl;

    return 0;
}
