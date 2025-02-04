#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next;
};
void insertatend(node *head, int data)
{
    if (head->next == nullptr)
    {
        return;
    }
    insertatend(head->next, data);
    node *newnode = new node();
    newnode->data = data;
    head->next = newnode;
    return;
}
void print(node *head)
{
    if (head == nullptr)
    {
        return;
    }
    cout << head->data << " ";
    print(head->next);
    return;
}
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