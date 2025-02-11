#include <iostream>
using namespace std;
struct Rectangle
{
    int length;
    int breadth;
};
int rectangle(struct Rectangle r1)
{
    return r1.length * r1.breadth;
}

int main()
{
    struct Rectangle *r = new Rectangle();
    r->length = 10;
    r->breadth = 5;
    cout << rectangle(*r);
    return 0;
}