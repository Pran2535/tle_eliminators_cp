#include <iostream>
using namespace std;

int main()
{
    char ch[] = "How are you";
    int i, words = 0;
    for (i = 0; ch[i] != '\0'; i++)
    {
        if (ch[i] == ' ' && ch[i - 1] != ' ')
        {
            words++;
        }
    }
    cout << words;
    return 0;
}