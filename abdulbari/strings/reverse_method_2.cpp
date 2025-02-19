#include <iostream>
using namespace std;

int main()
{
    char ch[] = "Python";
    int i, j;
    for (i = 0; ch[i] != '\0'; i++)
    {
    }
    i--;
    for (j = 0; j < i; j++, i--)
    {
        char temp = ch[j];
        ch[j] = ch[i];
        ch[i] = temp;
    }
    cout << "Reversed string: " << ch << endl;
    return 0;
}