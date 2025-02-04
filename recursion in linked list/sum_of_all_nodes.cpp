#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next;
};
int sum(node *head)
{
    if (head == nullptr)
    {
        return 0;
    }
    return head->data + sum(head->next);
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
    int arr[] = {1, 2, 3, 4, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    node *head = createlinkedlist(arr, size);
    cout << sum(head);
    return 0;
}