#include <iostream>
using namespace std;

int main()
{
    char ch[] = "WelcoME";
    int i;
    for (i = 0; ch[i] != '\0'; i++)
    {
        if (ch[i] >= 'A' && ch[i] <= 'Z')
        {
            ch[i] += 32;
        }
        else if (ch[i] >= 'a' && ch[i] <= 'z')
        {
            ch[i] -= 32;
        }
    }
    cout << ch;
    return 0;
}