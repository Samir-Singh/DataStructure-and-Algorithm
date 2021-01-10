/*
Program for nth node from end of linked list
ex: A-->B-->C-->D-->E-->NULL
    n=3         o/p: C
    n=2         o/p: D
Time Complexity : O(n)
 */
#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
int nthFromEnd(struct node *head, int n)
{
	struct node *p=head;
	struct node *q=head;
	int count=0;
	while(count < n-1)
	{
		q=q->next;
		count++;
	}
	while(q->next!=NULL)
	{
		p=p->next;
		q=q->next;
	}
	return p->data;
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
	int n;
	struct node *head, *second, *third, *fourth, *fifth;
	head=(struct node *)malloc(sizeof(struct node));
	second=(struct node *)malloc(sizeof(struct node));
	third=(struct node *)malloc(sizeof(struct node));
	fourth=(struct node *)malloc(sizeof(struct node));
	fifth=(struct node *)malloc(sizeof(struct node));
	head->data=12;
	head->next=second;
	second->data=26;
	second->next=third;
	third->data=33;
	third->next=fourth;
	fourth->data=48;
	fourth->next=fifth;
	fifth->data=15;
	fifth->next=NULL;
	display(head);
	n=3;
	printf("\n%dth node from end : %d",n,nthFromEnd(head,n));
	return 0;
}