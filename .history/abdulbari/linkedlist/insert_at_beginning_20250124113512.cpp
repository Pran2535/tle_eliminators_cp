#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next;
};
void insert_at_first(node *p)
{
    node *temp = new node;
    temp->data = 0;
    temp->next = p;
    p = temp;
}
int main()
{
    node *first = new node;
    node *second = new node;
    node *third = new node;
    node *fourth = new node;
    node *fifth = new node;
    first->data = 1;
    first->next = second;
    second->data = 2;
    second->next = third;
    third->data = 3;
    third->next = fourth;
    fourth->data = 4;
    fourth->next = fifth;
    fifth->data = 5;
    fifth->next = nullptr;
    insert_at_first(first);
    node *p = first;
    while (p != nullptr)
    {
        cout << p->data << " ";
        p = p->next;
    }
    return 0;
}