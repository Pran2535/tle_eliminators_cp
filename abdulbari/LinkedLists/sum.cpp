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
// void count(node *&head)
// {
//     node *temp = head;
//     int count = 0;
//     while (temp != NULL)
//     {
//         count++;
//         temp = temp->next;
//     }
//     cout << "Count of nodes: " << count << endl;
// }
// int count(int n, node *p)
// {
//     if (p != nullptr)
//     {
//         return count(n - 1, p->next) + 1;
//     }
// }
int count(node *p)
{
    if (p == 0)
    {
        return 0;
    }
    else
    {
        return count(p->next) + 1;
    }
}
int summ(node *p)
{
    if (p != 0)
    {
        //  p->data;
        return p->data + summ(p->next);
    }
    return 0;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    node *head = NULL;
    createLinkedList(arr, 5, head);
    cout << count(head);
    cout << endl;
    cout << summ(head);
    return 0;
}