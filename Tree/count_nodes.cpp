#include<stdio.h>
#include<stdlib.h>
typedef struct Node{
		int data;
		struct Node *left, *right;
}bst;
bst *root;
void insert()
{
	bst *nw,*ptr,*ptr1;
	int c=0;
	nw=(bst*)malloc(sizeof(bst));
	printf("Enter a number = ");
	scanf("%d",&nw->data);
	nw->left=NULL;
	nw->right=NULL;
	if(root==NULL)
		root=nw;
	else
	{
		ptr=root;
		ptr1=root;
		while(ptr)
		{
			if()	
		}	
	}	
}
void inorder()
{
	
}
void count()
{
	
}
int main()
{
	root=NULL;
	int ch;
	while(1)
	{
		printf("1.Insert\n2.Display\n3.Count the number of nodes\n4.Exit\nEnter your choice :- ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				insert();
			break;
			case 2:
				inorder();
			break;
			case 3:
				count();
			break;
			case 4:
				exit(0);
			break;
			default:
				printf("Invalid Input!!!!!");
		}
	}
	
}
