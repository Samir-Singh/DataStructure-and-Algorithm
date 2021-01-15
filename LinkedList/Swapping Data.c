/*
Program to swap data from the linked list:
ex1 : 1-->4-->2-->3-->7-->NULL     n1=1,n2=5
o/p : 7-->4-->2-->3-->1-->NULL   

ex2 : 1-->4-->2-->3-->7-->NULL      n1=1,n2=3;
o/p : 2-->4-->1-->3-->7-->NULL      
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
void swap(struct node *head, int n1, int n2)
{
	int count1,count2,temp;
	struct node *p=head;
	struct node *q=head;
	count1=count2=0;
	while(count1 < n1-1)
	{
		p=p->next;
		count1++;
	}
	while(count2 < n2-1)
	{
		q=q->next;
		count2++;
	}
	temp=p->data;
	p->data=q->data;
	q->data=temp;
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
	int n1,n2;
	struct node *head=NULL;
	head=insert(head,7);
	head=insert(head,3);
	head=insert(head,2);
	head=insert(head,4);
    head=insert(head,1);
    display(head);
    printf("\n\nEnter the node no. you want to swap : ");
    scanf("%d %d",&n1,&n2);
    swap(head,n1,n2);
    display(head);
	return 0;
}