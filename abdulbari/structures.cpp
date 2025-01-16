#include <iostream>
using namespace std;
struct Rectangle
{
    int length;
    int breadth;
}; // so basically structure is defined using struct keyword and in structures we can declare variables like length, breadth, and other items
int main()
{
    struct Rectangle r;
    r.length = 10;
    r.breadth = 5;
    int area = r.length * r.breadth;
    cout << "Area of rectangle is: " << area << endl;
    return 0;
}