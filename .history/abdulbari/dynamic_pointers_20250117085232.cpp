#include <iostream>
using namespace std;
struct Rectangle
{
    int length;
    int breadth;
    /* data */
};
int main()
{
    Rectangle *r1;
    r1 = new Rectangle;
    r1->breadth = 10;
    r1->length = 30;
    cout << "Area of Rectangle is: " << r1->length * r1->breadth << endl;
    delete r1; // free memory allocated to r1

    return 0;
}
