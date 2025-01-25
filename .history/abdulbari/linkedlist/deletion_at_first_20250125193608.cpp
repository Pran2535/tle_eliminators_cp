#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};

void insert_at_first(node *&p)
{
    node *temp = new node;
    temp->data = 0; // Default data value for new node
    temp->next = p;
    p = temp;
}

void delete_at_end(node *&p)
{
    if (p == nullptr)
    { // If the list is empty
        cout << "List is empty. Nothing to delete at the end." << endl;
        return;
    }
    if (p->next == nullptr)
    { // If there's only one node
        delete p;
        p = nullptr;
        return;
    }

    node *temp = p;
    while (temp->next->next != nullptr)
    { // Traverse to the second last node
        temp = temp->next;
    }
    delete temp->next; // Delete the last node
    temp->next = nullptr;
}

void delete_at_first(node *&p)
{
    if (p == nullptr)
    { // If the list is empty
        cout << "List is empty. Nothing to delete at the start." << endl;
        return;
    }
    node *temp = p;
    p = p->next; // Update head to the next node
    delete temp; // Free the old head
}

int count_elements(node *p)
{
    int count = 0;
    while (p != nullptr)
    {
        count++;
        p = p->next;
    }
    return count;
}

int main()
{
    // Create nodes and initialize the linked list
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

    // Insert a node at the beginning
    insert_at_first(first);

    // Delete the last node
    delete_at_end(first);

    // Print the list after insertion and deletion
    node *p = first;
    while (p != nullptr)
    {
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl;

    // Delete the first node
    delete_at_first(first);

    // Reset p and print the list after deletion at the start
    p = first;
    while (p != nullptr)
    {
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl;

    // Count and print the number of elements in the list
    cout << "Number of elements: " << count_elements(first) << endl;

    // Free the remaining nodes to avoid memory leaks
    while (first != nullptr)
    {
        node *temp = first;
        first = first->next;
        delete temp;
    }

    return 0;
}
