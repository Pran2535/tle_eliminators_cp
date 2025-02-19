#include <iostream>
using namespace std;

int main()
{
    char ch[] = "Python";
    char B[7];
    int i;
    for (i = 0; ch[i] != '\0'; i++)
    {
    }
    // i = i - 1;
    int j;
    for (j = 0; i >= 0, i--; j++)
    {
        B[j] = ch[i];
    }
    B[j] = '\0';
    cout << B;
    return 0;
}