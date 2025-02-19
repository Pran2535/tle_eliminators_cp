#include <iostream>
using namespace std;

int main()
{
    char ch[] = "finding";
    int duplicates = 0;
    for (int i = 0; ch[i] != '\0'; i++)
    {
        for (int j = i + 1; ch[j] != '\0'; j++)
        {
            if (ch[i] == ch[j])
            {
                duplicates++;
                break;
            }
        }
        if (duplicates > 0)
        {
            cout << "Duplicate character found: " << ch[i] << endl;
            // duplicates=0;
        }
    }
    return 0;
}