// Insert a node at the end of a doubly linked list

#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    Node() {}

    Node(int data)
    {
        this->data = data;
        prev = NULL;
        next = NULL;
    }

    Node(int data, Node *prev, Node *next)
    {
        this->data = data;
        this->next = next;
        this->prev = prev;
    }
};

void printList(Node *head)
{
    Node *curr = head;
    while (curr != NULL)
    {
        cout << curr->data << " ";
        curr = curr->next;
    }
    cout << endl;
}

Node *insertAtEnd(Node *head, int value)
{
    Node *to_insert = new Node(value);

    // corner case
    if (head == NULL)
        return to_insert;

    Node *curr = head;
    while (curr->next != NULL)
    {
        curr = curr->next;
    }
    curr->next = to_insert;
    to_insert->prev = curr;

    return head;
}

int main()
{
    Node *root = new Node(100);
    Node *n1 = new Node(200);
    Node *n2 = new Node(300);
    root->next = n1;
    n1->prev = root;
    n1->next = n2;
    n2->prev = n1;
    printList(root);
    insertAtEnd(root, 1000);
    printList(root);
    return 0;
}