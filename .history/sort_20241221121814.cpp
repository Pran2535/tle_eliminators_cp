#include <iostream>
using namespace std;

int main()
{
    int x, y, z;
    cin >> x >> y >> z;

    // Store original values
    int orig_x = x;
    int orig_y = y;
    int orig_z = z;

    // Sorting logic
    if (x > y)
        swap(x, y);
    if (x > z)
        swap(x, z);
    if (y > z)
        swap(y, z);

    // Print numbers in sorted order
    cout << x << endl;
    cout << y << endl;
    cout << z << endl;

    // Print original numbers
    cout << orig_x << endl;
    cout << orig_y << endl;
    cout << orig_z << endl;

    return 0;
}