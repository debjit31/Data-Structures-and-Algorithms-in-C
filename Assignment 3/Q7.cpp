#include<stdio.h>
#include<stdlib.h>
void create();
void display_from_front();
void split();
void display_first();
void display_second();
typedef struct Node{
	int data;
	struct Node *next;
	struct Node *prev;
}node;
node *head, *last, *last1, *head1;
int c = 0;
int main()
{
	int ch;
	head = NULL;
	last = NULL;
	while(1)
	{
		printf("\n1.Create\n2.Display from front\n3.Split the list into 2 equal halves\n4.Display 1st half\n5.Display 2nd half\n6.Exit\nEnter your choice :- ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				create();
				c++;
			break;
			case 2:
				display_from_front();
			break;
			case 3:
				split();
			break;
			case 4:
				display_first();
			break;
			case 5:
				display_second();
			break;
			case 6:
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
void split()
{
	int i = 0;
	head1=NULL;
	last1=NULL;
	node  *ptr,*ptr1;
	ptr = head;
	ptr1=head;
	while(i!=(c/2))
	{
		ptr1=ptr;
		ptr=ptr->next;
		i++;
	}
	ptr1->next=NULL;
	last1=ptr1;
	ptr->prev=head;
	head1=ptr;
}
void display_first()
{
	node *ptr;
	if(head==NULL)
	 printf("Linked list does not exists!!!");
	else
	{
		ptr = head;
		while(ptr!=NULL)
		{
			printf("%d\t",ptr->data);
			ptr = ptr->next;
		}
	}
}
void display_second()
{
	node *ptr;
	if(head1==NULL)
		printf("Linked list does not exists!!");
	else
	{
		ptr = head1;
		while(ptr!=NULL)
		{
			printf("%d\t",ptr->data);
			ptr = ptr->next;
		}
	}
}
