// #include <iostream>
// using namespace std;

// int main()
// {
//     cout << "hello world";
//     return 0;
// }

#include <iostream>
using namespace std;

int main()
{
    // cout << "hello pranav";
    // cout << endl; // endl is  used to end line
    // // cout << "hello cw";
    // variables and their declarations
    // int x = 5;
    // x = 10;
    // cout << x;
    // printing variables and updating them in c++
    // int x = 10;
    // cout << x << endl;
    // x = 11;
    // cout << x << endl;
    // x = x + 8;
    // cout << x << endl;
    // arithmetic operations in c++
    // int x = 5;
    // int y = 10;
    // cout << x + y << endl;
    // cout << x - y << endl;
    // cout << x * y << endl;
    // cout << x / y << endl;
    // cout << x % y << endl;

    // increment and decrement operators
    // int x;
    // x++;
    // cout << x << endl;
    // x--;
    // cout << x << endl;
    // ++x;
    // cout << x << endl;
    // --x;
    // cout << x << endl;
    // post increment and pre increment me difference ye hai ki hame jo pre increment hot hai woh pehle increment karta hai tab print and post increment print karta hai tab increment karta hai
    // float y = 10.0;
    // cout << (int)y % 5;
    // cout << 4 + (-2 % 8);
    //  take positive no as input and find out it is even or odd
    // int x;
    // cin >> x;
    // if (x % 2 == 0)
    // {
    //     cout << "even";
    // }
    // else
    // {
    //     cout << "odd";
    // }
    // write a program to check the profit or loss of the product
    // int cp;
    // int sp;
    // cin >> cp >> sp;
    // int profit = sp - cp;
    // int percentage = profit * 100 / cp;
    // cout << percentage;
    // int length;
    // int breadth;
    // cin >> length >> breadth;
    // int area = length * breadth;
    // int perimeter = 2 * (length + breadth);
    // if (area > perimeter)
    // {
    //     cout << "area is greater";
    // }
    // else
    // {
    //     cout << "perimeter is greater";
    // }
    //  take a positive no as input and check out whether it is of three digit of or not
    // so
    // int x;
    // cin >> x;
    // if (x > 99 && x <= 999)
    // {
    //     cout << "yes it is a three digit number" << endl;
    // }
    // else
    // {
    //     cout << "no it is not a three digit number" << endl;
    // }
    // take a positive integer as input and check whether it is divisible by 5 and 3 both or not
    //  so
    // if (x % 3 == 0 && x % 5 == 0)
    // {
    //     cout << "yes it is divisible by 3 and 5 both" << endl;
    // }
    // else
    // {
    //     cout << "no it is not divisible by 3 and 5 both" << endl;
    // }
    //  checking whether it is divisible by 5 or 3
    // if (x % 5 == 0 || x % 3 == 0)
    // {
    //     cout << "no is divisible by 5 or 3 both" << endl;
    // }
    // else
    // {
    //     cout << "no is not divisible by 5 or 3 ";
    // }
    //  take 3 integers as input and find whether they form a triangle or not
    // int a, b, c;
    // cin >> a >> b >> c;
    // if ((a + b > c) && (b + c > a) && (a + c > b))
    // {
    //     cout << "yes they form a triangle";
    // }
    // else
    // {
    //     cout << "no they do not form a triangle";
    // }
    // take three integers as inputs and print the greatest of them
    int a, b, c;
    cin >> a >> b >> c;
    // if (a > b && a > c)
    // {
    //     cout << a;
    // }
    // else if (b > a && b > c)
    // {
    //     cout << b;
    // }
    // else
    // {
    //     cout << c;
    // }
    //  tale 3  no  of positive and find the smallest no of these
    if (a < b && a < c)
    {
        cout << a;
    }
    else if (b < a && b < c)
    {
        cout << b;
    }
    else
    {
        cout << c;
    }
    return 0;
}