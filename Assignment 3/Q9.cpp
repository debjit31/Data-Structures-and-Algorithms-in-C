#include<stdio.h>
#include<stdlib.h>
void create();
void display_from_front();
void insert_at_suit();
typedef struct Node{
	int data;
	struct Node *next;
	struct Node *prev;
}node;
node *head, *last;
int main()
{
	int ch;
	head = NULL;
	last = NULL;
	printf("\nEnter the elements in the nodes in ascending order");
	while(1)
	{
		printf("\n1.Create\n2.Display from front\n3.Insert at suitable position\n4.Exit\nEnter your choice :- ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				create();
			break;
			case 2:
				display_from_front();
			break;
			case 3:
				insert_at_suit();
			break;
			case 4:
				exit(1);
			break;
			default:
				printf("\nINVALID CHOICE!!!!!!");
		}
	}
}
void create()
{
	node *nw, *ptr;
	nw = (node *)malloc(sizeof(node));
	printf("Enter a number = ");
	scanf("%d",&nw->data);
	nw->next = NULL;
	nw->prev = NULL;
	if(head==NULL&&last==NULL)
	{
		head=nw;
		last = head;
	}
	else
	{
		ptr = last;
		ptr->next=nw;
		nw->prev=ptr;
		last = nw;
	}
}
void display_from_front()
{
	node *ptr;
	if(head==NULL)
		printf("Linked list does not exists!!!1");
	else
	{
		ptr=head;
		while(ptr!=NULL)
		{
			printf("%d\t",ptr->data);
			ptr = ptr->next;
		}
	}
}
void insert_at_suit()
{
	node *nw,*ptr,*ptr1;
	nw=(node *)malloc(sizeof(node));
	printf("Enter a number = ");
	scanf("%d",&nw->data);
	if(head==NULL)
	 printf("Linked List does not exists!!");
	else
	{
		ptr = head;
		ptr1= head;
		while(nw->data>ptr->data&&ptr!=NULL)
		{
			ptr1 = ptr;
			ptr = ptr->next;
		}
		ptr1->next=nw;
		nw->next=ptr;
		ptr->prev=nw;
		nw->prev=ptr1;
	}
	display_from_front();
}

