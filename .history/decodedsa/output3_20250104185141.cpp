#include <iostream>
using namespace std;

int main()
{
    int x;
    cout << "enter your first number " << endl;
    cin >> x;
    int y;
    cin >> y;
    cout << (x != y) << " " << (x >= y);
    return 0;
}