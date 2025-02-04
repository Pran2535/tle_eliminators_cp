#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};

// Recursive function to insert a node at the end
void insertatend(node *&head, int data)
{
    // Base case: If the list is empty, create a new node
    if (head == nullptr)
    {
        head = new node();
        head->data = data;
        head->next = nullptr;
        return;
    }

    // Base case: If we reach the last node, insert the new node
    if (head->next == nullptr)
    {
        node *newnode = new node();
        newnode->data = data;
        newnode->next = nullptr;
        head->next = newnode;
        return;
    }

    // Recursive call for the next node
    insertatend(head->next, data);
}

// Function to print the linked list recursively
void print(node *head)
{
    if (head == nullptr)
    {
        return;
    }
    cout << head->data << " ";
    print(head->next);
}

// Function to create a linked list from an array
node *createlinkedlist(int arr[], int size)
{
    node *head = nullptr;
    for (int i = size - 1; i >= 0; i--)
    {
        node *newnode = new node();
        newnode->data = arr[i];
        newnode->next = head;
        head = newnode;
    }
    return head;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);

    node *head = createlinkedlist(arr, size);
    insertatend(head, 11);

    print(head);
    return 0;
}
