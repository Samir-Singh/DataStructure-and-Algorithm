/*
Remove Duplicates from sorted linked List :
ex1 : Input : 11-->11-->11-->21-->43-->43-->60
      O/P   : 11-->21-->43-->60
      
ex2 : Input : 11-->11-->11
      O/P   : 11
 */
#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node *insert(struct node *head, int data)
{
	struct node *newNode=(struct node *)malloc(sizeof(struct node));
	newNode->data=data;
	newNode->next=head;
	return newNode;
}
void removeDuplicates(struct node *head)
{
	struct node *q;
	struct node *p=head;
	while(p->next!=NULL)
	{
		if(p->data == p->next->data)
		{
			q=p->next;
			p->next=p->next->next;
			free(q);
		}
		else
		{
			p=p->next;
		}
	}
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
	head=insert(head,60);
	head=insert(head,43);
	head=insert(head,43);
	head=insert(head,21);
	head=insert(head,11);
	head=insert(head,11);
	head=insert(head,11);
	printf("Before Deletion : ");
	display(head);
	printf("\nAfter Deletion : ");
	removeDuplicates(head);
	display(head);
	return 0;
}