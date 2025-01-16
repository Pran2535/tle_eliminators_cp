#include <iostream>
using namespace std;
struct Rectangle
{
    int length;
    int breadth;
};
int main()
{
    struct Rectangle r;
    r.length = 10;
    r.breadth = 5;
    int area = r.length * r.breadth;
    cout << "Area of rectangle is: " << area << endl;
    return 0;
}