/*

To maintain the LIFO property of stack we have to perform all the insertions and deletion operations form the same
end. In case of arrays we can do it easily from the end of it. In linked list, we have the reference to the 
head not the tail, so it's easy to delete and add the items to the head(in O(1) time)

*/
#include <iostream>
using namespace std;

class Node
{
public:
int data;
Node* next=nullptr;

Node(int data)
{
    this->data = data;
    next=NULL;
}

Node(int data, Node* next)
{
    this->data = data;
    this->next = next;
}

};

class MyStack
{
public:
Node* head;
int sz;

MyStack()
{
    head=NULL;
    sz=0;
}

void push(int value)
{
    Node* temp=new Node(value);
    temp->next=head;
    head=temp;
    sz++;
}
};

int main()
{
    return 0;
}