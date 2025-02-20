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
int largest(int max, node *p)
{
    if (p == 0)
    {
        return max;
    }
    else if (p->data > max)
    {
        return largest(p->data, p->next);
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    node *head = NULL;
    createLinkedList(arr, 5, head);
    cout << largest(head);
    return 0;
}