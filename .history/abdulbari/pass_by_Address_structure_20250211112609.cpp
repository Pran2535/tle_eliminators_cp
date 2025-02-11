#include <iostream>
using namespace std;
struct Rectangle
{
    int length;
    int breadth;
};
void area(struct Rectangle *r)
{
    r->length = 25;
    cout << r->length * r->breadth;
}
int main()
{
    struct Rectangle r = {10, 5};
    area(&r);
    cout << endl;
    cout << r.length;
    return 0;
}