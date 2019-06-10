#include<stdio.h>
#include<stdlib.h>
typedef struct Node{
	int data;
	struct Node *next;
}node;
node *head;
void display()
{
	node *ptr;
	if(head == NULL)
		printf("Empty List!!!!");
	else
	{
		ptr = head;
		while(ptr!=NULL)
		{
			printf("%d\t",ptr->data);
			ptr= ptr->next;
		}
	}
}
void find_duplicates()
{
	node *ptr, *ptr1, *temp;
	int flag = 1;
	if (head == NULL)
		printf("Linked List does not exists!!!!");
	else
	{
		ptr = head;
		while(ptr!=NULL)
		{
			ptr1=ptr->next;
			while(ptr1!=NULL)
			{
				if(ptr->data == ptr1->data)
				{
					flag = 0;
					break;
				}
				ptr1=ptr->next;
			}
			if(flag == 0)
			{
				temp = head;
				while(temp->next!=ptr1)
					temp = temp->next;
				printf("Removed duplicate is = %d",ptr1->data);
				temp->next=ptr1->next;
				free(ptr1);
				display();	
			}
			else		
				ptr = ptr->next;	
		}
	}
}
void create()
{
	node *ptr, *nw;
	nw = (node *)malloc(sizeof(node));
	printf("Enter a number = ");
	scanf("%d",&nw->data);
	nw->next = NULL;
	if (head == NULL)
		head = nw;
	else
	{
		ptr = head;
		while(ptr->next!=NULL)
			ptr=ptr->next;
		ptr->next = nw;
	}
	
}
int main()
{
	create();
	create();
	create();
	create();
	create();
	create();
	create();
	create();
	create();
	find_duplicates();
	
}
