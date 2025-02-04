#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};
node *linkedlist(int arr[], int size)
{
    node *head = nullptr;
    for (int i = size - 1; i >= 0; i--)
    {
        node *newNode = new node();
        newNode->data = arr[i];
        newNode->next = head;
        head = newNode;
    }
    return head;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};

    return 0;
}