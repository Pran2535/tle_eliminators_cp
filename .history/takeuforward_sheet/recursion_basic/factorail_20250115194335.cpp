#include <iostream>
using namespace std;
void printfactorial(int n, int factorial)
{
    if (n == 0)
    {
        cout << factorial;
        return;
    }
    printfactorial(n - 1, n * factorial);
}
int main()
{
    int n;
    cout << "enter the number to find factorial" << endl;
    cin >> n;
    int factorial = 1;

    return 0;
}