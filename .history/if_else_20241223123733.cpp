#include <iostream>
using namespace std;

int main()
{
    // int a;
    // cin >> a;
    // if (a > 0)
    // {
    //     cout << "the number given here is positive ";
    // }
    // else
    // {
    //     cout << "the number here is negative";
    // }
    // return 0;
    // int a, b;
    // cin >> a >> b;
    // cout << "value of number a is " << a << "and" << "value of number b is " << b << endl;
    // int a = 2;
    // int b = a + 1;
    // if ((a = 3) == b)
    // {
    //     cout << a; // yaha pe maine a ko 3 initialize kiya and then  hum use check karenge ki 3==3 hai ki nahi woh check kar rahe hai hum log bataieng so output is 3 and answer is 3 here
    // }
    // else
    // {
    //     cout << a + 1;
    // }
    // loops concept

    // int n;
    // cin >> n;
    // int i = 1;
    // while (i <= n)
    // {
    //     cout << i << " " << endl;
    //     i = i + 1;
    // }
    // sum of all even nos and there upto 100
    // int sum = 0;
    // for (int i = 0; i <= 100; i++)
    // {
    //     if (i % 2 == 0)
    //     {
    //         sum = sum + i;
    //     }
    //     }
    // cout << sum;
    for (int i = 11; i < 100; i++)
    {
        cout << 2 << endl
             << 3 << endl
             << 5 << endl
             << 7 << endl;
        if ((i != 2) && (i % 2 != 0) && (i != 3) && (i % 3 != 0) && (i != 5) && (i % 5 != 0) && (i != 7) && (i % 7 != 0))
        {
            cout << i << endl;
        }
    }
}
