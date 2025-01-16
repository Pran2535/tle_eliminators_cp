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

    // for each loop
    // 1 7 8 3 4
    // so instead of saying that i is becoming zero 1 and two we are doing that 1 7 8 3 4
    // what is auto here auto matlab bhai ye automatically data assign kar leta hai
    int a[] = {1, 7, 8, 3, 4};
    for (auto i : a)
    {
        cout << i << endl;
    }
    return 0;
}