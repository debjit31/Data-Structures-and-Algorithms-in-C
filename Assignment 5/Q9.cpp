#include<stdio.h>
#include<stdlib.h>
void create();
void display();
void del_from_end();
typedef struct Node{
		int data;
		struct Node *next;
		struct Node *prev;
}node;
node *head;
int main()
{
	int ch;
	head=NULL;
	while(1)
	{
		printf("\n1.Create a Node\n2.Display\n3.Delete from end\n4.Exit\nEnter your choice :- ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				create();
			break;
			case 2:
				display();
			break;
			case  3:
				del_from_end();
			break;
			case 4:
				exit(0);
			break;
			default:
				printf("Invalid Input!!!!");
		}
	}
}
void create()
{
	node *nw, *ptr;
	nw=(node*)malloc(sizeof(node));
	printf("Enter a number = ");
	scanf("%d",&nw->data);
	nw->next=NULL;
	nw->prev=NULL;
	if(head==NULL)
	{
		head=nw;
		nw->next=head;
		head->prev=head;
	}
	else
	{
		ptr=head;
		while(ptr->next!=head)
			ptr=ptr->next;
		ptr->next=nw;
		nw->prev=ptr;
		nw->next=head;
		head->prev=nw;
	}
}
void display()
{
	node *ptr;
	if(head==NULL)
		printf("\nLinked list is empty!!!!");
	else
	{
		ptr=head;
		printf("\nLinked list :- \n");
		do
		{
			printf("%d\t",ptr->data);
			ptr=ptr->next;
		}while(ptr!=head);
	}
}
void del_from_end()
{
	node *ptr;
	if(head==NULL)
		printf("Linked list is empty!!!");
	else if(head->next==head)
	{
		printf("Delete item = %d",head->data);
		head=NULL;	
	}
	else
	{
		ptr=head;
		while(ptr->next!=head)
			ptr=ptr->next;
		printf("Delete item is = %d",ptr->data);
		ptr->prev->next=head;
		head->prev=ptr->prev;
		free(ptr);
	}
	display();
}
