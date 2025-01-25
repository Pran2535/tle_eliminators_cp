#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};
void insertatindex(node *p, int index, int data)
{
    int count = 0;
    while (count < index - 1)
    {
        count++;
        p = p->next;
    }
    node *temp = new node;
    temp->data = data;
    temp->next = p->next;
    p->next = temp;
}
void delete_at_index(node *p, int index)
{
    int count = 0;
    while (count < index - 1)
    {
        count++;
        p = p->next;
    }
    node *temp = new node;
    temp = p->next;
    p->next = temp->next;
    temp->next = nullptr;
    delete temp;
}
void display(node *p)
{
    while (p != nullptr)
    {
        cout << p->data << " ";
        p = p->next;
    }
}
int main()
{
    node *first = new node();
    node *second = new node();
    node *third = new node();
    node *fourth = new node();
    first->data = 0;
    first->next = second;
    second->data = 1;
    second->next = third;
    third->data = 2;
    third->next = fourth;
    fourth->data = 3;
    fourth->next = nullptr;
    insertatindex(first, 2, 5);
    delete_at_index(first, 3);
    display(first);
    return 0;
}