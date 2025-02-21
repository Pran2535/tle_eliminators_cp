#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};

// Inserts a new node at the beginning of a circular linked list
node *insertatstart(node *head, int data)
{
    // Create a new node with the given data
    node *newNode = new node();
    newNode->data = data;

    // If the list is empty, point newNode->next to itself and return it as head
    if (head == NULL)
    {
        newNode->next = newNode;
        return newNode;
    }

    // Find the last node (tail) whose next is head
    node *p = head;
    while (p->next != head)
    {
        p = p->next;
    }

    // Insert newNode before head:
    newNode->next = head;
    p->next = newNode;
    head = newNode;
    // newNode becomes the new head
    return head;
}

// Creates a circular linked list from an array
void createLinkedList(int arr[], int size, node *&head)
{
    head = NULL; // Ensure head is initially NULL
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
    // Make it circular by linking tail to head
    if (tail != NULL)
        tail->next = head;
}

// Displays the circular linked list
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
    cout << "..." << endl; // Indicates circularity
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    node *head = NULL;

    createLinkedList(arr, size, head);
    head = insertatstart(head, 10);
    display(head);

    return 0;
}
