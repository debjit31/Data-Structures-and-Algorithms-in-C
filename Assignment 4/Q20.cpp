#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void create();
void display();
void ret_recurring_charac();
typedef struct Node{
	char a;
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
		printf("\n1.Create\n2.Display\n3.return the first recurring character\n4.Exit\nEnter your choice :- ");
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
				ret_recurring_charac();
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
	fflush(stdin);
	nw = (node *)malloc(sizeof(node));
	printf("Enter a character of the string = ");
	scanf("%c",&nw->a);
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
			printf("%c\t",ptr->a);
			ptr = ptr->next;
		}
	}
}
void ret_recurring_charac()
{
	node *ptr,*ptr1;
	char t;
	if(head==NULL)
		printf("Linked list does not exists!!");
	else
	{
		ptr=head;
		while(ptr->next!=NULL)
		{
			ptr1=ptr->next;
			while(ptr1!=NULL){
			if(ptr1->a>ptr->next->a)
			{
				t=ptr1->a;
				ptr1->a=ptr1->next->a;
				ptr1->next->a=t;
			}
							}
		}
	}
	display();
}




