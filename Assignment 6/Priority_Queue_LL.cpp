#include<stdio.h>
#include<stdlib.h>
typedef struct Node{
		int data, p;
		struct Node *next;
}node;
node *head;
void insert()
{
	node *nw, *ptr, *ptr1;
	nw=(node*)malloc(sizeof(node));
	printf("Enter a number = ");
	scanf("%d",&nw->data);
	printf("Enter the priority of the value = ");
	scanf("%d",&nw->p);
	nw->next=NULL;
	if(head==NULL)
		head=nw;
	else
	{
		ptr=head;
		ptr1=head;
		while(ptr!=NULL&&ptr->p<nw->p)
		{
			ptr1=ptr;
			ptr=ptr->next;
		}
		if(ptr==NULL&&ptr1->next==NULL)
		{
			ptr1->next=nw;
		}
		else if(ptr==head&&ptr1==head)
		{
			nw->next=head;
			head=nw;
		}
		else
		{
			ptr1->next=nw;
			nw->next=ptr;
		}
	}
}
void display()
{
	node *ptr;
	if(head==NULL)
		printf("\nLinked List does not exists!!!");
	else
	{
		ptr=head;
		printf("\nPriority Queue :- \n");
		while(ptr!=NULL)
		{
			printf("%d\t",ptr->data);
			ptr=ptr->next;
		}
	}
}
void del()
{
	node *ptr;
	if(head==NULL)
		printf("Priority Queue is empty!!!");
	else
	{
		ptr=head;
		printf("Delete item = %d",ptr->data);
		head=ptr->next;
		free(ptr);
	}
}
int main()
{
	int ch;
	head=NULL;
	while(1)
	{
		printf("\n1.Insert in Priority Queue\n2.Delete in Priority Queue\n3.Display the Queue\n4.Exit\nEnter your choice :- ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				insert();
			break;
			case 2:
				del();
			break;
			case 3:
				display();
			break;
			case 4:
				exit(1);
			break;
			default:
				printf("Invalid Choice!!!!!");
		}
	}
}
