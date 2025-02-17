#include <iostream>
using namespace std;

struct Array
{
    int *a;
    int size;
    int length;
};

int main()
{
    struct Array arr;

    cout << "Enter the size of the array: ";
    cin >> arr.size;

    arr.a = new int[arr.size]; // Allocate memory dynamically
    arr.length = 0;            // Initialize length to 0

    // Input elements into the array
    cout << "Enter the number of elements you want to insert: ";
    cin >> arr.length;

    if (arr.length > arr.size)
    {
        cout << "Error: Length cannot be greater than size!" << endl;
        delete[] arr.a; // Free allocated memory before exiting
        return 1;
    }

    cout << "Enter " << arr.length << " elements: ";
    for (int i = 0; i < arr.length; i++)
    {
        cin >> arr.a[i];
    }

    // Display the elements
    cout << "Array elements are: ";
    for (int i = 0; i < arr.length; i++)
    {
        cout << arr.a[i] << " ";
    }
    cout << endl;

    // Free allocated memory
    delete[] arr.a;

    return 0;
}
