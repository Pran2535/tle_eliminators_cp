#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};

// Deletes the head node from a circular linked list and returns the new head
node *deleteathead(node *head)
{
    if (head == NULL)
        return NULL;
    // If there is only one node, delete it and return NULL.
    if (head->next == head)
    {
        delete head;
        return NULL;
    }

    // Find the tail node (node whose next is head)
    node *tail = head;
    while (tail->next != head)
        tail = tail->next;

    node *temp = head;       // node to be deleted
    tail->next = head->next; // tail now points to second node
    head = head->next;       // update head
    delete temp;             // free memory
    return head;
}

// Deletes the node at a given index (0-indexed) in a circular linked list and returns the head.
node *deleteatindex(node *head, int index)
{
    if (head == NULL)
        return NULL;

    // If index is 0, delete the head.
    if (index == 0)
        return deleteathead(head);

    // Traverse to the node just before the node to be deleted.
    node *curr = head;
    for (int i = 0; i < index - 1; i++)
    {
        curr = curr->next;
        // If we have looped back to head, index is out of bounds.
        if (curr == head)
        {
            return head;
        }
    }
    // curr->next is the node to delete.
    node *temp = curr->next;
    curr->next = temp->next;
    delete temp;
    return head;
}

// Inserts a new node at the beginning of a circular linked list and returns the new head.
node *insertatstart(node *head, int data)
{
    node *newNode = new node();
    newNode->data = data;

    // If list is empty, make newNode circular.
    if (head == NULL)
    {
        newNode->next = newNode;
        return newNode;
    }

    // Find the tail node (whose next is head).
    node *tail = head;
    while (tail->next != head)
        tail = tail->next;

    // Insert newNode before head.
    newNode->next = head;
    tail->next = newNode;

    // New node becomes the new head.
    return newNode;
}

// Creates a circular linked list from an array.
void createLinkedList(int arr[], int size, node *&head)
{
    head = NULL; // Ensure head is initially NULL.
    node *tail = NULL;

    for (int i = 0; i < size; i++)
    {
        node *newNode = new node();
        newNode->data = arr[i];
        newNode->next = NULL;

        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }
    // Make the list circular by linking tail to head.
    if (tail != NULL)
        tail->next = head;
}

// Displays the circular linked list.
void display(node *head)
{
    if (head == NULL)
        return;

    node *temp = head;
    do
    {
        cout << temp->data << "->";
        temp = temp->next;
    } while (temp != head);
    cout << "..." << endl; // Indicates circularity.
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    node *head = NULL;

    createLinkedList(arr, size, head);

    // Insert 10 at the beginning: new node becomes the new head.
    head = insertatstart(head, 10);
    display(head); // Expected: 10->1->2->3->4->5->...

    // Delete the node at index 3 (0-indexed).
    head = deleteatindex(head, 3);
    cout << endl;
    display(head);

    return 0;
}
