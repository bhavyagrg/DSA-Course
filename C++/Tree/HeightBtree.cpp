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

int height(btree *root)
{
    if (root == NULL)
        return 0;

    return (max(height(root->left), height(root->right)) + 1);
}

int main()
{
    btree *root = new btree(10);
    root->left = new btree(20);
    root->right = new btree(30);
    root->right->left = new btree(40);
    root->right->right = new btree(50);

    cout << "The height of binary tree is : " << height(root);

    return 0;
}