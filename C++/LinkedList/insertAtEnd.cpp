#include <iostream>
using namespace std;

class Node
{
public:
    Node *next = nullptr;
    int value;

    Node() {}

    Node(int value)
    {
        this->value = value;
        next = NULL;
    }

    Node(int value, Node *next)
    {
        this->next = next;
        this->value = value;
    }
};

void insertAtEnd(Node *&headValue, int value)
{
    Node *n = new Node(value);
    Node *curr = headValue;
    while (curr->next != NULL)
        curr = curr->next;

    curr->next = n;
}

int main()
{
    Node *root = new Node(10);
    Node *n1 = new Node(20);
    root->next = n1;

    Node *n2 = new Node(30);
    n1->next = n2;

    insertAtEnd(root, 100);

    Node *curr = root;
    while (!(curr == NULL))
    {
        cout << curr->value << " ";
        curr = curr->next;
    }
    return 0;
}