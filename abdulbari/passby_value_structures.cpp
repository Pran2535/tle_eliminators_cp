#include <iostream>
using namespace std;
struct Rectangle
{
    int length;
    int breadth;
};
void area(struct Rectangle r)
{
    cout << r.length * r.breadth;
}
int main()
{
    struct Rectangle r = {10, 5};
    area(r);
    return 0;
}