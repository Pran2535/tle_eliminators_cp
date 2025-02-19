// #include <iostream>
// using namespace std;
// struct Matrix
// {
//     int A[10];
//     int n;
// };
// void Set(struct Matrix *m, int i, int j, int x)
// {
//     if (i == j)
//     {
//         m->A[i - 1] = x;
//     }
// }
// int get(struct Matrix m, int i, int j)
// {
//     if (i == j)
//     {
//         return m.A[i - 1];
//     }
//     else
//     {
//         return 0;
//     }
// }
// void display(struct Matrix m)
// {
//     int i, j;
//     for (i = 0; i < m.n; i++)
//     {
//         for (j = 0; j < m.n; j++)
//         {
//             if (i == j)
//             {
//                 cout << m.A[i - 1] << ",";
//             }
//             else
//             {
//                 cout << "0,";
//             }
//         }
//         cout << "\n";
//     }
// }
// int main()
// {
//     struct Matrix m;
//     m.n = 4;
//     // Set(&m, 0, 0, 3);
//     Set(&m, 1, 1, 5);
//     Set(&m, 2, 2, 8);
//     Set(&m, 3, 3, 9);
//     Set(&m, 4, 4, 10);
//     display(m);
//     return 0;
// }
#include <iostream>
using namespace std;

struct Matrix
{
    int A[10]; // Stores diagonal elements
    int n;     // Size of the square matrix
};

// Function to set a value in the diagonal matrix
void Set(struct Matrix *m, int i, int j, int x)
{
    if (i == j) // Only store diagonal elements
    {
        m->A[i - 1] = x; // 1-based index adjustment
    }
}

// Function to get a value from the diagonal matrix
int Get(struct Matrix m, int i, int j)
{
    if (i == j)
    {
        return m.A[i - 1]; // 1-based index adjustment
    }
    else
    {
        return 0; // Non-diagonal elements are zero
    }
}

// Function to display the matrix
void Display(struct Matrix m)
{
    int i, j;
    for (i = 1; i <= m.n; i++) // 1-based indexing
    {
        for (j = 1; j <= m.n; j++)
        {
            if (i == j)
            {
                cout << m.A[i - 1] << " "; // Corrected indexing
            }
            else
            {
                cout << "0 "; // Non-diagonal elements are zero
            }
        }
        cout << endl;
    }
}

int main()
{
    struct Matrix m;
    m.n = 4; // Setting matrix size

    // Setting diagonal elements
    Set(&m, 1, 1, 5);
    Set(&m, 2, 2, 8);
    Set(&m, 3, 3, 9);
    Set(&m, 4, 4, 10);

    // Displaying the matrix
    Display(m);

    return 0;
}
