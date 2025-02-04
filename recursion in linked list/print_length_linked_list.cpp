#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next;
};
node *createlinkedlist(int arr[], int size)
{
    node *head = nullptr;
    for (int i = size - 1; i >= 0; i--)
    {
        node *newnode = new node;
        newnode->data = arr[i];
        newnode->next = head;
        head = newnode;
    }
    return head;
}
int length(node *head)
{
    if (head == nullptr)
    {
        return 0;
    }
    return 1 + length(head->next);
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    node *head = createlinkedlist(arr, size);
    cout << length(head);
    return 0;
}