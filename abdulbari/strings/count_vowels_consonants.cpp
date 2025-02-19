#include <iostream>
using namespace std;

int main()
{
    char ch[] = "How are you";
    int i, vcount = 0, ccount = 0;
    for (i = 0; ch[i] != '\0'; i++)
    {
        if (ch[i] == 'A' || ch[i] == 'E' || ch[i] == 'I' || ch[i] == 'O' || ch[i] == 'U' || ch[i] == 'a' || ch[i] == 'e' || ch[i] == 'i' || ch[i] == 'o' || ch[i] == 'u')
        {
            vcount++;
        }
        else if ((ch[i] >= 'A' && ch[i] <= 'Z') || (ch[i] >= 'a' && ch[i] <= 'z'))
        {
            ccount++;
        }
    }
    cout << vcount << endl;
    cout << ccount << endl;
    return 0;
}