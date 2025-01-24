#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};

int main()
{
    node *head = nullptr; // Pointer to the head of the list
    node *tail = nullptr; // Pointer to the tail of the list

    // Create 5 nodes
    for (int i = 0; i < 5; i++)
    {
        int temp;
        cout << "Enter value for node " << (i + 1) << ": ";
        cin >> temp;

        // Create a new node
        node *newNode = new node;
        newNode->data = temp;
        newNode->next = nullptr;

        // Append the node to the list
        if (head == nullptr)
        {
            // If the list is empty, make the new node the head
            head = newNode;
            tail = newNode;
        }
        else
        {
            // Otherwise, link it to the last node and update the tail
            tail->next = newNode;
            tail = newNode;
        }
    }

    // Print the linked list
    cout << "The linked list is: ";
    node *current = head;
    while (current != nullptr)
    {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;

    // Free the allocated memory
    current = head;
    while (current != nullptr)
    {
        node *temp = current;
        current = current->next;
        delete temp;
    }

    return 0;
}
