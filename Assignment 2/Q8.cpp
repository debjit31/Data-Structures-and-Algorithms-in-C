#include<stdio.h>
#include<stdlib.h>
typedef struct Node{
	int data;
	struct Node *next;
}node;
node *head;
void create();
void display();
void del_beg();
int main()
{
	int ch;
	head=NULL;
	while(1)
	{
		printf("\n1.Create\n2.Display\n3.Delete from beginning\n4.Exit\nEnter your choice :- ");
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
				del_beg();
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
void del_beg()
{
	node *ptr,*ptr1;
	ptr=head;
	ptr1=head;
	do
	{
		ptr=ptr->next;
	}while(ptr->next!=head);
	printf("Delete item is = %d",ptr1->data);
	head = ptr1->next;
	free(ptr1);
	ptr->next=head;
	if(ptr1==ptr)
		head=NULL;
	
}
