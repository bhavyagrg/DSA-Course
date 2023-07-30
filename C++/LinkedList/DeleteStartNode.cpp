#include <iostream>
using namespace std;

class Node
{
public:
    int value;
    Node *next;

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

void printList(Node* head)
{
    while(head!=NULL)
    {
        cout<<head->value<<" ";
        head = head->next;
    }
    cout<<endl;
}

Node* deleteEnd(Node* &head)
{
    if(head == NULL) return NULL;
    else{
        Node* newHead = head->next;
        delete head;
        return newHead;
    }
    
}

int main()
{
    Node *root = new Node(10);
    Node *n1 = new Node(20);
    root->next = n1;
    Node *n2 = new Node(30);
    n1->next = n2;
    Node *n3 = new Node(40);
    n2->next = n3;

    printList(root);
    root = deleteEnd(root);
    printList(root);

    return 0;
}