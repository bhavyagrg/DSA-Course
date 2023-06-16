#include <iostream>
using namespace std;

class btree
{
public:
    int key;
    btree *left;
    btree *right;

    btree(int key)
    {
        this->key = key;
        left = right = NULL;
    }
};

void postorder(btree *root)
{
    if (root != NULL)
    {
        postorder(root->left);
        postorder(root->right);
        cout << root->key << " ";
    }
}

int main()
{
    btree *root = new btree(10);
    root->left = new btree(20);
    root->right = new btree(30);
    root->right->left = new btree(40);
    root->right->right = new btree(50);

    postorder(root);

    return 0;
}