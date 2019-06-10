#include<stdio.h>
#include<stdlib.h>
typedef struct Node{
	int data;
	struct Node *next;
}node;
node *head1, *head2;
void display1()
{
	node *ptr;
	if(head1==NULL)
		printf("Linked list does not exists!!!!");
	else
	{
		ptr=head1;
		while(ptr!=NULL)
		{
			printf("%d\t",ptr->data);
			ptr = ptr->next;
		}
	}
}
void display2()
{
	node *ptr;
	if(head2==NULL)
		printf("Linked list does not exists!!!!");
	else
	{
		ptr=head2;
		while(ptr!=NULL)
		{
			printf("%d\t",ptr->data);
			ptr = ptr->next;
		}
	}
	
}
void create1()
{
	node *nw, *ptr;
	nw = (node *)malloc(sizeof(node));
	printf("enter a number = ");
	scanf("%d",&nw->data);
	nw->next=NULL;
	if(head1 == NULL)
		head1=nw;
	else
	{
		ptr = head1;
		while(ptr->next!=NULL)
			ptr = ptr->next;
		ptr->next=nw;
	}
	printf("The First list is :- \n");
	display1();
}
void create2()
{
	node *nw, *ptr;
	nw = (node *)malloc(sizeof(node));
	printf("enter a number = ");
	scanf("%d",&nw->data);
	nw->next=NULL;
	if(head2 == NULL)
		head2=nw;
	else
	{
		ptr = head2;
		while(ptr->next!=NULL)
			ptr = ptr->next;
		ptr->next=nw;
	}
	printf("The Second list is :- \n");
	display2();
}
void merge()
{
	node *ptr;
	if(head1 == NULL)
		printf("1st list is empty!!!!");
	else
	{
		ptr=head1;
		while(ptr->next!=NULL)
			ptr = ptr->next;
		ptr->next=head2;
	}
	printf("the merged list is :- \n");
	ptr = head1;
	while(ptr!=NULL)
	{
		printf("%d\t",ptr->data);
		ptr = ptr->next;
	}
	
}
void sort_merged_list()
{
	node *ptr, *ptr1;
	int temp;
	if(head1 == NULL)
		printf("Linked List is empty!!!");
	else
	{
		ptr=head1;
		while(ptr->next!=NULL)
		{
			ptr1=ptr->next;
			while(ptr1!=NULL)
			{
				if(ptr->data>ptr1->data)
				{
					temp = ptr->data;
					ptr->data = ptr1->data;
					ptr1->data = temp;
				}
				ptr1=ptr1->next;
			}
			ptr = ptr->next;
		}
		printf("the sorted merged list is :- \n");
		display1();
	}
}
int main()
{
	int ch;
	head1=NULL;
	head2=NULL;
	while(1)
	{
		printf("\n1.Create the 1st list\n2.Create the 2nd List\n3.Merge 2 lists\n4.Sort the merged list\n5.Exit\nEnter your choice : - ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				create1();
			break;
			case 2:
				create2();
			break;
			case 3:
				merge();
			break;
			case 4:
				sort_merged_list();
			break;
			case 5:
				exit(0);
			break;
			default:
				printf("Invalid Input!!!!");
		}
	}
}
