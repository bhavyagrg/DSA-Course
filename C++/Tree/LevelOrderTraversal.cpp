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

void BFS(BTree *root)
{
	queue<BTree *> nodes;
	nodes.push(root);

	while (!nodes.empty())
	{
		auto node = nodes.front();
		nodes.pop();

		if (node->key)
		{
			cout << node->key << " ";
		}
		if (node->left)
			nodes.push(node->left);
		if (node->right)
			nodes.push(node->right);
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

	BFS(root);
}