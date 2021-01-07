#include<stdio.h>
#include<stdlib.h>
struct node 
{
	int data;
	struct node *left, *right;
};
struct node *createNode(int data)
{
	struct node *newNode=(struct node *)malloc(sizeof(struct node));
	newNode->data=data;
	newNode->left=newNode->right=NULL;
	return newNode;
}
struct node *insert(struct node *root, int data)
{
	if(root == NULL) return createNode(data);
	else if(data < root->data) root->left=insert(root->left,data);
	else root->right=insert(root->right,data);
	return root;
}
void inorder(struct node *root)
{
	if(root!=NULL)
	{
		inorder(root->left);
	    printf("%d ",root->data);
	    inorder(root->right);
	}
}
int main()
{
	struct node *root=NULL;
	root=insert(root,25);
	insert(root,12);
	insert(root,35);
	insert(root,4);
	insert(root,15);
	insert(root,30);
	insert(root,40);
	inorder(root);
	return 0;
}