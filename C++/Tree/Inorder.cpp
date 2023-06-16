#include <iostream>
using namespace std;

class btree
{
public:
    int key;
    btree *left;
    btree *right;
    // constructor
    btree(int key)
    {
        this->key = key;
        left = right = NULL;
    }
};

void inorder(btree *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        cout << root->key << " ";
        inorder(root->right);
    }
}

int main()
{
    btree *root = new btree(10);
    root->left = new btree(20);
    root->right = new btree(30);
    root->right->left = new btree(40);
    root->right->right = new btree(50);

    inorder(root);

    return 0;
}