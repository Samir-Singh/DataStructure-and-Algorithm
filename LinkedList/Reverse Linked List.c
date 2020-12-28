#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node *insert(struct node *head, int data)
{
	struct node *newnode=(struct node *)malloc(sizeof(struct node));
	newnode->data=data;
	newnode->next=head;
	return newnode;
}
struct node *reverseList(struct node *head)
{
	struct node *current=head;
	struct node *prev=NULL;
	struct node *next=NULL;
	while(current!=NULL)
	{
		next=current->next;
		current->next=prev;
		prev=current;
		current=next;
	}
	return prev;
}
void display(struct node *head)
{
	struct node *temp=head;
	while(temp!=NULL)
	{
		printf("%d ",temp->data);
		temp=temp->next;
	}
}
int main()
{
	struct node *head=NULL;
	head=insert(head,10);
	head=insert(head,20);
	head=insert(head,30);
	head=insert(head,40);
	head=insert(head,50);
	printf("List are : ");
	display(head);
	printf("\nAfter reversing list : ");
	head=reverseList(head);
	display(head);
    return 0;
}