#include<stdio.h>
#include<stdlib.h>
void create();
void display();
void del_odd_node();
typedef struct Node{
	int data;
	struct Node *next;
	struct Node *prev;
}node;
node *head;
int main()
{
	int ch;
	head = NULL;
	while(1)
	{
		printf("\n1.Create\n2.Display\n3.Delete odd node element\n4.Exit\nEnter your choice :- ");
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
				del_odd_node();
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
	if(head==NULL)
		head=nw;
	else
	{
		ptr=head;
		while(ptr->next!=NULL)
			ptr=ptr->next;
		ptr->next=nw;
		nw->prev=ptr;
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
		while(ptr!=NULL)
		{
			printf("%d\t",ptr->data);
			ptr = ptr->next;
		}
	}
}
void del_odd_node()
{
	node *ptr;
	if(head==NULL)
		printf("Linked List does not exists!!!!");
	else
	{
		ptr=head;
		while(ptr!=NULL)
		{
			if(ptr->data%2==0)
				ptr=ptr->next;
			else
			{
				printf("Delete item is =%d",ptr->data);
				ptr->prev->next=ptr->next;
				ptr->next->prev=ptr->prev;
				free(ptr);
				
			}
		}
	}
}



