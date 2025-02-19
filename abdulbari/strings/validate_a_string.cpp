#include <iostream>
using namespace std;

bool check(const char *name) // Use 'const' since name is not modified
{
    int i;
    for (i = 0; name[i] != '\0'; i++)
    {
        if (!((name[i] >= 'A' && name[i] <= 'Z') ||
              (name[i] >= 'a' && name[i] <= 'z') ||
              (name[i] >= '0' && name[i] <= '9')))
        {
            return false; // Found a non-alphanumeric character, return false immediately
        }
    }
    return true; // All characters are valid, return true
}

int main()
{
    const char *name = "Pranav@123"; // Using 'const' for string literals
    cout << check(name);
    return 0;
}
