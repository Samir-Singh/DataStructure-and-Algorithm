#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
void display(struct node *head)
{
	struct node *temp=head;
	while(temp!=NULL)
	{
		printf("%d ",temp->data);
		temp=temp->next;
	}
}
/* Main logic from here */
int midOfLinkedList(struct node *head)
{
	struct node *p=head;
	struct node *q=head;
	while(q->next!=NULL)
	{
		p=p->next;
		q=q->next->next;
	}
	return p->data;
}
/* Logic ends here */
int main()
{
	struct node *head, *second, *third, *fourth, *fifth;
	head=(struct node *)malloc(sizeof(struct node));
	second=(struct node *)malloc(sizeof(struct node));
	third=(struct node *)malloc(sizeof(struct node));
	fourth=(struct node *)malloc(sizeof(struct node));
	fifth=(struct node *)malloc(sizeof(struct node));
	head->data=1;
	head->next=second;
	second->data=2;
	second->next=third;
	third->data=3;
	third->next=fourth;
	fourth->data=4;
	fourth->next=fifth;
	fifth->data=5;
	fifth->next=NULL;
	display(head);
	printf("\nMid of Linked List is : %d",midOfLinkedList(head));
	return 0;
}