#include <iostream>
using namespace std;
int area(int length, int breadth)
{
    return length * breadth;
}
int perimeter(int length, int breadth)
{
    return 2 * (length + breadth);
}
int main()
{
    int length;
    int breadth;
    cin >> length;
    cin >> breadth;
    cout << area(length, breadth);
    cout << endl;
    cout << perimeter(length, breadth);
    cout << endl;
    return 0;
}