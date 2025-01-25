#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next;
    node *prev;
};
void traversal_at_end(node *p)
{
    while (p != nullptr)
    {
        cout << p->data << ",";
        p = p->prev;
    }
}

void traversal(node *p)
{
    while (p != nullptr)
    {
        cout << p->data << " ";
        p = p->next;
    }
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
    first->prev = nullptr;
    second->data = 2;
    second->next = third;
    second->prev = first;
    third->data = 3;
    third->next = fourth;
    third->prev = second;
    fourth->data = 4;
    fourth->next = fifth;
    fourth->prev = third;
    fifth->data = 5;
    fifth->next = nullptr;
    fifth->prev = fourth;
    traversal(first);
    cout << endl;
    traversal_at_end(fifth);
    return 0;
}