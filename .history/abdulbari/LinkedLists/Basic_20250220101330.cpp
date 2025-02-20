#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
};
int main()
{
    Node *node = new Node();
    node->data = 10;
    node->next = nullptr;
    cout << node->data;
    return 0;
}