#include <bits/stdc++.h>
using namespace std;

// A Tree node
struct Node {
int key;
struct Node *left, *right;
};

// Utility function to create a new node
Node* newNode(int key)
{
Node* temp = new Node;
temp->key = key;
temp->left = temp->right = NULL;
return (temp);
}

/*Function to find the height(depth) of the tree*/
int height(Node* root)
{

// Initialising a variable to count the
// height of tree
queue<Node*> q;
q.push(root);
int height = 0;
while (!q.empty()) {
	int size = q.size();
	for (int i = 0; i < size; i++) {
	Node* temp = q.front();
	q.pop();
	if (temp->left != NULL) {
		q.push(temp->left);
	}
	if (temp->right != NULL) {
		q.push(temp->right);
	}
	}
	height++;
}
return height;
}

// Driver program
int main()
{
Node* root = newNode(1);
root->left = newNode(2);
root->right = newNode(3);

root->left->left = newNode(4);
root->left->right = newNode(5);

cout << "Height(Depth) of tree is: " << height(root);
}
