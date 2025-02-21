#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next;
};
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
    tail->next = head;
}
void display(node *head)
{
    node *temp = head;
    cout << temp->data << "->";
    temp = temp->next;
    while (temp != head)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    node *head = 0;
    createLinkedList(arr, size, head);

    display(head);
    return 0;
}