#include <iostream>
using namespace std;
int g = 25;
int main()
{
    int a;
    int b = 5;
    b = 10;
    int c = 7;
    g = 30;
    cout << g << endl; // Output: 30
    if (true)
    {
        int b = 15;
        cout << b << endl; // Output: 15
        cout << c;
        g = 50;
        cout << g << endl; // Output: 50
    }
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << g << endl;
    return 0;
}