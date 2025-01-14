#include <iostream>
using namespace std;

int main()
{
    char arr[3] = {'a', 'b', 'v'};
    char *ptr = arr;

    for (int i = 0; i < 3; i++)
    {
        cout << *ptr << endl;
        ptr++;
    }

    return 0;
}