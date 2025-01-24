#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};

// Function to insert a node at a specific index
void insert_at_index(node *&head, int index, int value)
{
    node *temp = new node;
    temp->data = value;
    temp->next = nullptr;

    if (index == 0)
    {
        // Insert at the beginning
        temp->next = head;
        head = temp;
        return;
    }

    node *p = head;
    int count = 0;

    // Traverse to the node just before the desired index
    while (p != nullptr && count < index - 1)
    {
        p = p->next;
        count++;
    }

    if (p == nullptr)
    {
        cout << "Index out of bounds." << endl;
        delete temp; // Clean up memory
        return;
    }

    // Insert the node at the specified index
    temp->next = p->next;
    p->next = temp;
}

int main()
{
    // Create and initialize the linked list
    node *first = new node;
    node *second = new node;
    node *third = new node;
    node *fourth = new node;
    node *fifth = new node;

    first->data = 1;
    first->next = second;
    second->data = 2;
    second->next = third;
    third->data = 3;
    third->next = fourth;
    fourth->data = 4;
    fourth->next = fifth;
    fifth->data = 5;
    fifth->next = nullptr;

    // Insert a new node at index 2 with value 10
    insert_at_index(first, 2, 10);

    // Print the linked list
    node *p = first;
    while (p != nullptr)
    {
        cout << p->data << " ";
        p = p->next;
    }

    return 0;
}
