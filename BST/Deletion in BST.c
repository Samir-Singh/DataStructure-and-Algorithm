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
struct node *minValue(struct node *root)
{
	while(root->left)
	{
		root=root->left;
	}
	return root;
}
struct node *insert(struct node *root, int data)
{
	if(root==NULL) return createNode(data);
	else if(data < root->data) root->left=insert(root->left,data);
	else root->right=insert(root->right,data);
	return root;
}
struct node *delete(struct node *root, int data)
{
	if(root == NULL) return NULL;
	else if(data < root->data) root->left=delete(root->left,data);
	else if(data > root->data) root->right=delete(root->right,data);
	else 
	{
		if(root->left==NULL)
		{
			struct node *temp=root->right;
			free(root);
			return temp;
		}
		else if(root->right==NULL)
		{
			struct node *temp=root->left;
			free(root);
			return temp;
		}
		else
		{
			struct node *temp=minValue(root->right);
			root->data=temp->data;
			root->right=delete(root->right,temp->data);
		}
	}
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
	insert(root,11);
	insert(root,6);
	insert(root,19);
	insert(root,4);
	insert(root,8);
	insert(root,17);
	insert(root,43);
	insert(root,5);
	insert(root,10);
	insert(root,31);
	printf("After insertion : ");
	inorder(root);
	delete(root,8);
	printf("\nAfter deletion : ");
	inorder(root);
	return 0;
}