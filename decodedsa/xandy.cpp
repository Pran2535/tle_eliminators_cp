#include <iostream>
using namespace std;

int main()
{
    int x;
    int y;
    cin >> x >> y;
    if (x > 0)
    {
        cout << "coordinate lies on x axis" << endl;
    }
    else
    {
        cout << "coordinate lies on y axis" << endl;
    }
    return 0;
}