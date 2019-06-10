#include<stdio.h>
#include<stdlib.h>
typedef struct Node{
		int data;
		struct Node *next;
}node;
node *head;
void input()
{
	int choice;
	node *nw,*ptr;
	nw=(node *)malloc(sizeof(node));
	printf("Enter a number = ");
	scanf("%d",&nw->data);
	nw->next=NULL;
	printf("\nDo you want to insert from left or right?\n1.Left\n2.Right\nEnter your choice : - ");
	scanf("%d",&choice);
	if(choice==1)
	{
		
		if(head==NULL)
			head=nw;
		else
		{
			ptr=head;
			nw->next=head;
			head=nw;
		}
	}
	else
	{
		if(head==NULL)
		head=nw;
	else
	{
		ptr=head;
		while(ptr->next!=NULL)
			ptr=ptr->next;
		ptr->next=nw;
	}
}
/*void insert2()
{
	node *nw,*ptr;
	nw=(node *)malloc(sizeof(node));
	printf("Enter a number = ");
	scanf("%d",&nw->data);
	nw->next=NULL;
	
	}	
}*/
/*void input_restri()
{
	int choice;
	printf("\nDo you want to insert from left or right?\n1.Left\n2.Right\nEnter your choice : - ");
	scanf("%d",&choice);
	if(ch==1)
		insert1();
	else
		insert2();
}*/
/*void output_restri()
{
	int choice;
	printf("\nDo you want to delete from left or right?\n1.Left\n2.Right\nEnter your choice : - ");
	scanf("%d",&choice);
	if(ch==1)
		del1();
	else
		del2();
}*/
int main()
{
	int ch;
	head=NULL;
	while(1)
	{
		printf("1.Input\n2.Output\nEnter your choice :- ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				input();
			break;
			case 2:
				output();
			case 3:
				display();
			break;
			case 4:
				exit(1);
			break;
			default:
				printf("Invalid Input!!!");
    	}
	}
}
