#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};

// Function to create a linked list from an array
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
}

// Function to insert a node in sorted order
node *insertNode(int data, node *&head)
{
    node *newNode = new node();
    newNode->data = data;
    newNode->next = NULL;

    // If list is empty or data is smaller than head
    if (head == NULL || head->data > data)
    {
        newNode->next = head;
        head = newNode;
        return head;
    }

    node *ptr1 = head;
    node *ptr2 = head->next;

    // Traverse until we find the right position
    while (ptr2 != NULL && ptr2->data < data)
    {
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }

    // Insert the new node between ptr1 and ptr2
    ptr1->next = newNode;
    newNode->next = ptr2;

    return head;
}

// Function to print the linked list
void print(node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}
void deletion(node *&head)
{
    node *temp = head;
    head = head->next;
    temp->next = nullptr;
    delete temp;
}

// Main function
int main()
{
    int arr[] = {1, 2, 3, 4, 5}; // Removed 4 to test insertion
    node *head = NULL;

    createLinkedList(arr, 5, head);

    head = insertNode(7, head); // Insert 4 at correct position
    head = insertNode(6, head); // Insert 6 at correct position
    deletion(head);
    deletion(head);
    print(head); // Expected Output: 1 2 3 4 5 6

    return 0;
}
