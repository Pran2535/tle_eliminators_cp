#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next;
};
void createLinkedList(int arr[], int size, node *&head)
{
    for (int i = 0; i < size; i++)
    {
        node *newNode = new node();
        newNode->data = arr[i];
        newNode->next = NULL;
        if (head == NULL)
        {
            head = newNode;
        }
        else
        {
            node *temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }
}
node *insertNode(int data, node *&head)
{
    node *p = new node();
    p->data = data;
    p->next = head;
    head = p;
    return head;
}
void print(node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    node *head = NULL;
    createLinkedList(arr, 5, head);
    // cout << largest(0, head);
    // cout << search(head, 3);
    head = insertNode(4, head);
    head = insertNode(6, head);
    print(head);
    return 0;
}