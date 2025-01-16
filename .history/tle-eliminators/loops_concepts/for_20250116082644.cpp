#include <iostream>
using namespace std;

int main()
{
    for (int i = 0; i <= 5; i++)
    {
        i = i + 10;
        cout << i << endl;
    }
    // for loop with more than one variable and condition
    for (int i = 0, j = 0; i < 5 && j < 7; i++, j += 2)
    {
        cout << i << endl;
    }
    return 0;
}