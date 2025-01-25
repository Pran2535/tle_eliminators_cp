#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next;
};
void print(node *p)
{
    node *temp = p;
    while (temp->next != p)
    {
        cout << temp->data << ",";
        temp = temp->next;
    }
    cout << temp->data;
}
int main()
{
    node *first = new node;
    node *second = new node;
    node *third = new node;
    node *fourth = new node;
    first->data = 1;
    first->next = second;
    second->data = 2;
    second->next = third;
    third->data = 3;
    third->next = fourth;
    fourth->data = 4;
    fourth->next = first;
    print(first);
    return 0;
}