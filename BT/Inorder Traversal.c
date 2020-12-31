#include<stdio.h>
#include<stdlib.h>
struct node 
{
	int data;
	struct node *left, *right;
};
struct node *creatnode(int data)
{
	struct node *newNode=(struct node *)malloc(sizeof(struct node));
	newNode->data=data;
	newNode->left=newNode->right=NULL;
	return newNode;
}
void inorder(struct node *root)
{
	if(root==NULL) return ;
	else
		{
			inorder(root->left);
			printf("%d ",root->data);
			inorder(root->right);
		}
}
int main()
{
	struct node *root=creatnode(50);
	root->left=creatnode(30);
	root->left->left=creatnode(90);
	root->left->right=creatnode(60);
	root->right=creatnode(40);
	root->right->right=creatnode(70);
	inorder(root);
	return 0;
}