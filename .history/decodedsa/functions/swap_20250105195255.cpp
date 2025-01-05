#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int temp = a;
    a = b;
    b = temp;
    cout << a << " " << b << "" << endl;
    return 0;
}