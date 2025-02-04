#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next;
};

void print_reverse(node *head)
{
    if (head == nullptr)
    {
        return;
    }
    cout << head->data << "->";
    print_reverse(head->next);
}
node *createlinkedlist(int arr[], int size)
{
    node *head = nullptr;
    for (int i = 0; i < size; i++)
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
    print_reverse(head);
    return 0;
}