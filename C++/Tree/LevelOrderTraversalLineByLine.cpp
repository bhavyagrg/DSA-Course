#include <iostream>
#include <queue>
using namespace std;

class BTree
{
public:
	int key;
	BTree *left, *right;

	BTree(int key)
	{
		this->key = key;
		left = right = NULL;
	}
};

void BFS1(BTree* root)
{
    queue<BTree*> nodes;
    nodes.push(root);
    nodes.push(NULL);

    while(nodes.size() > 1){
        auto node = nodes.front();
        nodes.pop();

        if(node == NULL){
            cout<<endl;
            nodes.push(NULL);
            continue;
        }

        cout<<node->key<<" ";
        if(node->left) nodes.push(node->left);
        if(node->right) nodes.push(node->right);
    }
}

void BFS2(BTree* root)
{
    queue<BTree*> nodes;
    nodes.push(root);

    while(!nodes.empty())
    {
        int count = nodes.size();
        for(int i = 0;i<count;i++)
        {
            auto node = nodes.front();
            nodes.pop();
            cout<<node->key<<" ";
            if(node->left) nodes.push(node->left);
            if(node->right) nodes.push(node->right);
        }
    cout<<endl;

    }
}

int main()
{
	BTree *root = new BTree(10);
	root->left = new BTree(20);
	root->right = new BTree(30);
	root->right->right = new BTree(70);
	root->left->left = new BTree(40);
	root->left->right = new BTree(50);

    cout<<"BFS1: "<<endl;
	BFS1(root);
    cout<<"BFS2 : "<<endl;
    BFS2(root);
}