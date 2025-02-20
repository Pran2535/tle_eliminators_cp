#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
};
int main()
{
    struct Node *first = new Node();
    first->data = 10;
    // first->next = nullptr;
    Node *second = new Node();
    second->data = 20;
    first->next = second;
    Node *ptr = first;

    while (ptr != nullptr)
    {
        cout << ptr->data;
        ptr = ptr->next;
    }
    return 0;
}