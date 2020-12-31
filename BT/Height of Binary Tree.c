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
int heightOfTree(struct node *root)
{
	int h;
	if(root==NULL) return 0;
	else
		{
			int leftHeight=heightOfTree(root->left);
			int rightHeight=heightOfTree(root->right);
			if(leftHeight > rightHeight)
				h=1+leftHeight;
			else
				h=1+rightHeight;
		}
		return h;
}
int main()
{
	struct node *root=createNode(1);
	root->left=createNode(2);
	root->right=createNode(3);
	root->left->left=createNode(4);
	printf("Height of tree is : %d",heightOfTree(root));
	return 0;
}