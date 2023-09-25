#include <iostream>
using namespace std;

class BTree{
public:
    int key;
    BTree *left,*right;

    BTree(int key)
    {
        this->key = key;
        left = right = nullptr;
    }

};

void printDist(BTree* root,int k)
{
    if(root == nullptr) return;
    if(k == 0) cout<< root->key<<" ";
    else{
        printDist(root->left,k-1);
        printDist(root->right,k-1);
    }
}

int main()
{
    BTree* root = new BTree(10);
    root->left = new BTree(20);
    root->right = new BTree(30);
    root->right->right = new BTree(70);
    root->left->left = new BTree(40);
    root->left->right = new BTree(50);

    printDist(root,2);
}