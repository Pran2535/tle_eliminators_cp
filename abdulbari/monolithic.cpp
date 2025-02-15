#include <iostream>
using namespace std;

int main()
{
    int length;
    int breadth;
    cin >> length;
    cin >> breadth;
    int area = length * breadth;
    cout << area;
    cout << endl;
    int perimeter = 2 * (length + breadth);
    cout << perimeter;
    return 0;
}