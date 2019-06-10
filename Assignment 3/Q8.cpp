#include<stdio.h>
#include<stdlib.h>
void create();
void display_from_front();
void insert_at_any();
typedef struct Node{
	char s[20];
	struct Node *next;
	struct Node *prev;
}node;
node *head, *last;
int main()
{
	int ch;
	head = NULL;
	last = NULL;
	while(1)
	{
		printf("\n1.Create\n2.Display from front\n3.Exit\nEnter your choice :- ");
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
	printf("Enter a string = ");
	gets(nw->s);
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
			printf("%s\n",ptr->s);
			ptr = ptr->next;
		}
	}
}

