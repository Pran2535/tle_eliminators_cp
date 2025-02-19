#include <iostream>
using namespace std;

int main()
{
    char ch[] = "Painter";
    char bh[] = "Painting";
    int i, j;
    for (i = 0, j = 0; ch[i] != '\0' && bh[j] != '\0'; i++, j++)
    {
        if (ch[i] != bh[j])

            break;
    }
    if (ch[i] == bh[j])
    {
        cout << "equal";
    }
    else if (ch[i] < bh[j])
    {
        cout << "ch is smaller";
    }
    else
    {
        cout << "bh is smaller";
    }
    return 0;
}