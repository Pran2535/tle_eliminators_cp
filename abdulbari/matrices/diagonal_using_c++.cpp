#include <iostream>
using namespace std;

class Diagonal
{
private:
    int *A;
    int n;

public:
    // Default constructor
    Diagonal()
    {
        n = 2;
        A = new int[n];
    }

    // Parameterized constructor
    Diagonal(int size)
    {
        this->n = size;
        A = new int[n]();
    }

    // Destructor
    ~Diagonal()
    {
        delete[] A;
    }

    // Corrected method names
    void setElement(int i, int j, int value);
    int getElement(int i, int j);
    void display();
};

// Set an element in the diagonal matrix
void Diagonal::setElement(int i, int j, int x)
{
    if (i == j)
        A[i - 1] = x; // 1-based indexing adjustment
    else
        cout << "Cannot set value at non-diagonal position\n";
}

// Get an element from the diagonal matrix
int Diagonal::getElement(int i, int j)
{
    if (i == j)
        return A[i - 1]; // 1-based indexing adjustment
    return 0;
}

// Display the diagonal matrix
void Diagonal::display()
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
                cout << A[i] << " "; // Corrected indexing
            else
                cout << "0 ";
        }
        cout << "\n";
    }
}

int main()
{
    // Create a Diagonal matrix of size 4
    Diagonal d(4);

    // Set diagonal elements
    d.setElement(1, 1, 5);
    d.setElement(2, 2, 8);
    d.setElement(3, 3, 9);
    d.setElement(4, 4, 10);

    // Display the matrix
    d.display();

    return 0;
}
