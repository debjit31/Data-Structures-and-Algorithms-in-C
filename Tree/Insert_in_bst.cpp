#include<stdio.h>
#include<stdlib.h>
void create();
typedef struct tree{
	int data;
	struct tree *left, *right;
}bst;
bst *root;
void insert();
void inorder(bst *);
int main()
{
	int ch;
	root=NULL;
	while(1)
	{
		printf("\n1.Create\n2.Inorder Traversal\n3.Insert\n4.Exit\nEnter your Choice :- ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				create();
			break;
			case 2:
				inorder(root);
			break;
			case 3:
				insert();
			break;
			case 4:
				exit(1);
			break;
			default:
				printf("Invalid Choice!!!");
		}
	}
}
void create()		/*BST Creation Non-recursive function*/
{
	bst *nw,*ptr,*ptr1;
	int item,c=0;
	fflush(stdin);
	nw=(bst*)malloc(sizeof(bst));
	printf("\nEnter a number = ");
	scanf("%d",&item);
	nw->data=item;
	nw->left=NULL;
	nw->right=NULL;
	if(root == NULL)
		root=nw;
	else
	{
		ptr=root;
		ptr1=ptr;
		while(ptr)
		{
			if(ptr->data>item)
   			{
				ptr1=ptr;
				ptr=ptr->left;
				c=0;
			}
			else
			{
				ptr1=ptr;
				ptr=ptr->right;
				c=1;
			}
		}
		if(c==0)
			ptr1->left=nw;
		else
			ptr1->right=nw;
	}
}
void inorder(bst *root)  		/*Recursive Traversal*/
{
	if(root == NULL)
		return;
	inorder(root->left);
	printf("%d\t",root->data);
	inorder(root->right);
}
void insert()
{
	bst *nw, *ptr, *ptr1;
	int flag = 1;
	fflush(stdin);
	nw = (bst *)malloc(sizeof(bst));
	printf("Enter a new element = ");
	scanf("%d",&nw->data);
	nw->left=NULL;
	nw->right=NULL;
	if(root == NULL)
		root = nw;
	else
	{
		ptr=root;
		ptr1=ptr;
		while(ptr!=NULL)
		{
			if(nw->data<ptr->data)
			{
				ptr1=ptr;
				ptr = ptr->left;
				flag = 1;
			}
			else
			{
				ptr1=ptr;
				ptr=ptr->right;
				flag = 0;
			}
		}
		if(flag == 0)
			ptr1->right=nw;
		else
		 ptr1->left=nw;
	}
	inorder(root);
}
