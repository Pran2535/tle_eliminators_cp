#include <iostream>
using namespace std;

int main()
{
    char ch[] = "Python"; // Original string
    char B[7];            // Array to store reversed string
    int i;

    // Find the length of the string
    for (i = 0; ch[i] != '\0'; i++)
    {
    }

    i = i - 1; // Set i to last character index
    int j = 0; // Initialize index for B

    // Reverse the string
    while (i >= 0)
    {
        B[j] = ch[i]; // Copy character from ch to B in reverse order
        i--;          // Move backward in ch
        j++;          // Move forward in B
    }

    B[j] = '\0'; // Null-terminate the reversed string

    cout << B; // Print the reversed string
    return 0;
}
