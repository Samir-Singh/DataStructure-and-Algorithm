#include<stdio.h>
#include<stdlib.h>
struct node 
{
	int data;
	struct node *left, *right;
};
struct node *createnode(int data)
{
	struct node *newNode=(struct node *)malloc(sizeof(struct node));
	newNode->data=data;
	newNode->left=newNode->right=NULL;
	return newNode;
}
void preorder(struct node *root)
{
	if(root==NULL) return;
	else
	{
		printf("%d ",root->data);
	    preorder(root->left);
	    preorder(root->right);
	}
}
int main()
{
	struct node *root=createnode(50);
	root->left=createnode(30);
	root->left->left=createnode(90);
	root->left->right=createnode(60);
	root->right=createnode(40);
	root->right->right=createnode(70);
	preorder(root);
	return 0;
}