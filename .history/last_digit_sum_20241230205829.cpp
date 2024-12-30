#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    // Take the last digit of absolute values to handle negatives
    int lastDigitA = abs(a) % 10;
    int lastDigitB = abs(b) % 10;

    // Print the sum of last digits
    cout << (lastDigitA + lastDigitB) << endl;

    return 0;
}
