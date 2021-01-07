#include<stdio.h>
#include<stdlib.h>
struct node 
{
	int data;
	struct node *left, *right;
};
int searchBST(struct node *root, int data)
{
	if(root == NULL) return 0;
	else if(root->data == data) return 1;
	else if(data < root->data) return searchBST(root->left, data);
	else return searchBST(root->right, data);
}
struct node *createNode(int data)
{
	struct node *newNode=(struct node *)malloc(sizeof(struct node));
	newNode->data=data;
	newNode->left=newNode->right=NULL;
	return newNode;
}
int main()
{
	struct node *root;
	int data;
	root=createNode(25);
	root->left=createNode(12);
	root->left->left=createNode(4);
	root->left->right=createNode(15);
	root->right=createNode(35);
	root->right->left=createNode(30);
	root->right->right=createNode(40);
	data=35;
	if(searchBST(root,data)) printf("Search Successful :)");
	else printf("Search is not Successful :(");
	return 0;
}