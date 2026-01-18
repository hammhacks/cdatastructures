#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	int data;
	struct node *left;
	struct node *right;
}node;

node* createNode(int value){
	node* newNode = (node*)malloc(sizeof(node));

	if (newNode == NULL){
		printf("create node mem allocation failed.\n");
		exit(1);
	}

	newNode->data = value;
	newNode->left = NULL;
	newNode->right = NULL;

	return newNode;
}

node* insert(node* root, int value){
	if (root==NULL)
		return createNode(value);

	if(value < root->data)
		root->left = insert(root->left, value);
	else{
		if (value > root->data)
			root->right = insert(root->right, value);
	}

	return root;
}

void traverseTree(node* root){
	

}

int main(){
	
	node* root = insert(NULL,5);
	insert(root,6);
	insert(root,4);

	printf("The root node has: %d\n",root->data);
	printf("The left child of root is: %d\n",root->left->data);
	

	return 0;
}
