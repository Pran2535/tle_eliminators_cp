#include <iostream>
using namespace std;

int main()
{
    long long a; // Changed to long long for large numbers
    long long b; // Changed to long long for large numbers
    cin >> a >> b;
    int x = a % 10;  // Get last digit of a
    int y = b % 10;  // Get last digit of b
    int sum = x + y; // Simply add the digits without modulo
    cout << sum << endl;
    return 0;
}