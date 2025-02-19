#include <iostream>
using namespace std;

bool check(char *name)
{
    int i;
    for (i = 0; name[i] != '\0'; i++)
    {
        if (!((name[i] >= 'A' && name[i] <= 'Z') || (name[i] >= 'a' && name[i] <= 'z') || (name[i] >= '0' && name[i] <= '9')))
        {
            return false;
        }
        return true;
    }
}
int main()
{
    char *name = "Pranav@123";
    cout << check(name);
    return 0;
}