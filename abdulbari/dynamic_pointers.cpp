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
    r1 = new Rectangle; // by new keyword we are creating a new rectangle variable of length length and breadth b
    // new keyword helps us to get the new object in heap memory from the constructor
    r1->breadth = 10;
    r1->length = 30;
    cout << "Area of Rectangle is: " << r1->length * r1->breadth << endl;
    delete r1; // free memory allocated to r1

    return 0;
}
