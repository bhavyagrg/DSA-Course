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
    }

    Node(int value, Node *next)
    {
        this->next = next;
        this->value = value;
    }
};

Node *insertAtBeg(Node *&head, int x)
{
    Node *firstNode = new Node(x);
    firstNode->next = head;
    head = firstNode;
    return firstNode;
}

int main()
{
    Node *root = new Node(10);
    Node *n1 = new Node(20);
    root->next = n1;

    Node *n2 = new Node(30);
    n1->next = n2;

    cout << insertAtBeg(root, 100)->value << endl;

    Node *curr = root;
    while (curr != NULL)
    {
        cout << curr->value << " ";
        curr = curr->next;
    }
    return 0;
}