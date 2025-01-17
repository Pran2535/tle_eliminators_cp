#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int &p = a; // hum int &p sirf nahi bana sakete hame value assign karni padegi matlab
    // p = a;
    cout << p << endl;
    cout << &p;
    return 0;
}