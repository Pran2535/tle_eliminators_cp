#include <iostream>
using namespace std;

int main()
{
    int a = 10, b = 20, c = 30;
    int *p = &a, *q = &b, *r = &c;

    *p = *q + *r; // Step 1: Update a using b and c
    r = p;        // Step 2: r now points to a
    *q = *r - *p; // Step 3: Update b using values pointed by r and p
    p = &c;       // Step 4: p now points to c
    *p = *r + *q; // Step 5: Update c using values pointed by r and q

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;

    return 0;
}
