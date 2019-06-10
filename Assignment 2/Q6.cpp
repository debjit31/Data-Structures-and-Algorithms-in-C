#include<stdio.h>
#include<stdlib.h>
typedef struct Node{
	int data;
	struct Node *next;
}node;
node *head;
void create();
void display();
void in_middle();
int main()
{
	int ch;
	head=NULL;
	while(1)
	{
		printf("\n1.Create\n2.Display\n3.Insert at specific position\n4.Exit\nEnter your choice :- ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				create();
			break;
			case 2:
				display();
			break;
			case 3:
				in_middle();
			break;
			case 4:
				exit(0);
			break;
			default:
				printf("Invalid  Input!!!!");
		}
	}
}
void create()
{
	node *nw,*ptr;
	nw = (node *)malloc(sizeof(node));
	printf("Enter a number = ");
	scanf("%d",&nw->data);
	nw->next = NULL;
	if(head==NULL)
	{
		head=nw;
		nw->next=head;
	}
	else
	{
		ptr = head;
		while(ptr->next!=head)
			ptr=ptr->next;
		ptr->next = nw;
		nw->next=head;
	}
}
void display()
{
	node *ptr;
	if(head==NULL)
		printf("Linked list does not exists!!!");
	else
	{
		ptr=head;
		do
		{
			printf("%d\t",ptr->data);
			ptr = ptr->next;	
		}while(ptr!=head);
	}
}
void in_middle()
{
	node *nw, *ptr, *ptr1;
	int pos,i=1;
	printf("Enter the position you want to insert = ");
	scanf("%d",&pos);
	if(head==NULL)
		printf("Linked List does not exists!!!");
	else
	{
		nw = (node *)malloc(sizeof(node));
		printf("Enter  a number = ");
		scanf("%d",&nw->data);
		nw->next=NULL;
		ptr=head;
		ptr1=head;
		while(ptr->next!=head&&i!=pos)
		{
			ptr1=ptr;
			ptr = ptr->next;
			i++;
		}
		nw->next=ptr;
		ptr1->next=nw;
	}
	display();
}
