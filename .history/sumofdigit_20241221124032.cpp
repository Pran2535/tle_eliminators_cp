#include <iostream>
using namespace std;

int main()
{
    int a;
    int b;
    cin >> a >> b;
    int x = a % 10;
    int y = b % 10;
    cout << x + y << endl;
    return 0;
}