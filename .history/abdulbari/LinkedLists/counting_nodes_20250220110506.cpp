#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

// Function to create a linked list from an array
void createLinkedList(int arr[], int size, Node *&head)
{ // Pass by reference
    if (size == 0)
        return;

    head = new Node(); // Create the first node
    head->data = arr[0];
    head->next = NULL;

    Node *temp = head; // Pointer to traverse the list
    for (int i = 1; i < size; i++)
    {
        Node *newNode = new Node();
        newNode->data = arr[i];
        newNode->next = NULL;
        temp->next = newNode;
        temp = newNode; // Move temp to the new last node
    }
}

// Function to count the nodes in the linked list
void count(Node *&head)
{
    int count = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    cout << "Count of nodes: " << count << endl;
}

// Function to print the linked list
void printList(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    Node *head = NULL; // Initialize the linked list

    createLinkedList(arr, 5, head);
    printList(head); // Print the list
    count(head);     // Count nodes

    return 0;
}
