 #include<stdio.h>
#include<stdlib.h>
#include<string.h>
void create();
void display();
void del_shortest_string();
typedef struct Node{
	char s[20];
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
		printf("\n1.Create\n2.Display\n3.Delete shortest string\n4.Exit\nEnter your choice :- ");
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
				del_shortest_string();
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
	printf("Enter a string = ");
	gets(nw->s);
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
			printf("%s\t",ptr->s);
			ptr = ptr->next;
		}
	}
}
void del_shortest_string()
{
	node *ptr;
	int sl;
	if(head==NULL)
		printf("Linked List does not exists!!!");
	else
	{
		ptr=head;
		sl=strlen(ptr->s);
		while(ptr->next!=NULL)
		{
			ptr=ptr->next;
			if(sl>strlen(ptr->s))
			{
				sl=strlen(ptr->s);
				ptr=ptr->next;
			}
		}
	}
}



