#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

// Function to insert a new node at the end of the linked list
void insertAtEnd(Node *&head, int data)
{
    Node *newNode = new Node();
    newNode->data = data;
    newNode->next = NULL;

    if (head == NULL)
    {
        // If the list is empty, the new node becomes the head
        head = newNode;
        return;
    }

    // Traverse to the last node
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    // Insert at the end
    temp->next = newNode;
}

// Function to print the linked list
void display(Node *p)
{
    if (p != nullptr)
    {

        display(p->next);
        cout << p->data << "->";
    }
}

int main()
{
    Node *head = NULL; // Initialize an empty linked list

    // Insert some nodes
    insertAtEnd(head, 10);
    insertAtEnd(head, 20);
    insertAtEnd(head, 30);

    // Print the linked list
    display(head);

    return 0;
}
