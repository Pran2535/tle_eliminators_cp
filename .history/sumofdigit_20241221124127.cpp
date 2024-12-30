#include <iostream>
using namespace std;

int main()
{
    int a;
    int b;
    cin >> a >> b;
    int x = a % 10;
    int y = b % 10;
    int l = (x + y) % 10;
    cout << l << endl;
    return 0;
}