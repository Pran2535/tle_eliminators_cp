#include <iostream>
using namespace std;

int maxi(int a, int b, int c, int d)
{
    int max_val = a;
    if (b > max_val)
        max_val = b;
    if (c > max_val)
        max_val = c;
    if (d > max_val)
        max_val = d;
    return max_val;
}
void greet(string name)
{
    cout << "hello " << name;
}
int main()
{
    greet("pranav");
    cout << maxi(4, 5, 6, 7);
    return 0;
}