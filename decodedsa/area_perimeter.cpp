#include <iostream>
using namespace std;

int main()
{
    int a;
    int b;
    cin >> a;
    cin >> b;
    int perimeter = 2 * (a + b);
    int area = a * b;
    if (area > perimeter)
    {
        cout << "Area is greater than perimeter";
    }
    else if (area < perimeter)
    {
        cout << "Perimeter is greater than area";
    }
    return 0;
}