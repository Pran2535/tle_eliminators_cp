#include <iostream>
using namespace std;
struct Rectangle
{
    int length;
    int breadth;
};
int area(struct Rectangle r)
{
    return r.length * r.breadth;
}
int perimeter(struct Rectangle r)
{
    return 2 * (r.length + r.breadth);
}
int main()
{
    Rectangle r = {10, 20};
    cout << area(r) << endl;
    cout << perimeter(r) << endl;
    return 0;
}