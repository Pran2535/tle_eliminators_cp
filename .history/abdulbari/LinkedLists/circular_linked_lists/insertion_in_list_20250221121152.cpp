#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next;
};
node *insertatstart(node *head, int data)
{
    node *p = head;
    while (p->next != head)
    {
        p = p->next;
    }

    node *newNode = new node();
    newNode->data = data;
    newNode->next = head;
    head = newNode;
    // tail->next = newNode;
    p->next = newNode;
    head = newNode;
    return head;
}
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
    insertatstart(head, 10);
    display(head);
    return 0;
}