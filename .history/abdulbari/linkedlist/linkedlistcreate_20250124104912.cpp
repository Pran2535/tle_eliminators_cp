#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next;
};

int main()
{

    node *head = nullptr;
    node *tail = nullptr;
    for (int i = 0; i < 5; i++)
    {
        int temp;
        cout << "enter value of node" << (i + 1) << ": ";
        cin >> temp;
        node *newnode = new node;
        newnode->data = temp;
        newnode->next = nullptr;
        if (head == nullptr)
        {
            head = newnode;
            tail = newnode;
        }
        else
        {
            tail->next = newnode;
            tail = newnode;
        }
    }
    cout << "the linked list is";
    node *current = head;
    while (current != nullptr)
    {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
    current = head;
    while (current != nullptr)
    {
        node *temp = current;
        current = current->next;
        delete temp;
    }
    return 0;
}