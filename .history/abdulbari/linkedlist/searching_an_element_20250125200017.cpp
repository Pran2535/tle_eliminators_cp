#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};

void search(node *p, int data)
{
    while (p != nullptr)
    {
        if (p->data == data)
        {
            cout << "Element found" << endl;
            return;
        }
        p = p->next;
    }
    cout << "Element not found" << endl;
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
    search(first, 5);
    return 0;
}