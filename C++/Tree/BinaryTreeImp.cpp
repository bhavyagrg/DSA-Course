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

int main()
{
    btree *root = new btree(10);
    root->left = new btree(20);
    root->right = new btree(30);
    root->left->left = new btree(40);

    cout << "root " << root->key << endl
         << "root left " << root->left->key << endl
         << "root right " << root->right->key << endl
         << "root left left " << root->left->left->key << endl;
    return 0;
}