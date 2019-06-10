#include<stdio.h>
#include<stdlib.h>
void create();
void display();
void del_given_data();
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
		printf("\n1.Create\n2.Display\n3.Delete given data\n4.Exit\nEnter your choice :- ");
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
				del_given_data();
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
void del_given_data()
{
	node *ptr,*ptr1;
	int val;
	if(head==NULL)
		printf("Linked List does not exists!!!!");
	else
	{
		printf("Enter the data which you want to delete = ");
		scanf("%d",&val);
		ptr=head;
		ptr1=head;
		while(ptr->next!=NULL&&ptr->data!=val)
		{
			ptr1=ptr;
			ptr=ptr->next;
		}
		if(ptr==ptr1)
		{
			printf("Delete item = %d",ptr->data);
			head=ptr->next;
			head->prev=NULL;
			free(ptr);
		}
		else if(ptr->next==NULL)
		{
			printf("Delete item = %d",ptr->data);
			ptr1->next=NULL;
			free(ptr);
		}
		else
		{
			printf("Delete item = %d",ptr->data);
			ptr1->next=ptr->next;
			ptr->next->prev=ptr1;
			free(ptr);
		}
	}
}



