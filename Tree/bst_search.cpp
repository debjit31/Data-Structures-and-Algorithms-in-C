#include<stdio.h>
#include<stdlib.h>
void create();
typedef struct tree{
	int data;
	struct tree *left, *right;
}bst;
bst *root;
void search();
void inorder(bst *);
int main()
{
	int ch;
	root=NULL;
	while(1)
	{
		printf("\n1.Create\n2.Inorder Traversal\n3.Search\n4.Exit\nEnter your Choice :- ");
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
				search();
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
void search()
{
	int key,flag;
	bst *ptr, *ptr1;
	printf("Enter the element you want to search = ");
	scanf("%d",&key);
	if (root == NULL)
		printf("Tree does not exists!!!!");
	else
	{
		ptr=root;
		ptr1=root;
		while(ptr!=NULL)
		{
			if(key>ptr->data)
			{
				ptr1=ptr;
				ptr = ptr->right;
			}
			else if(key<ptr->data)
			{
				ptr1=ptr;
				ptr = ptr->left;
			}
			else if(ptr->data==key)
			{
				flag = 1;
				break;
			}
		}
		if(flag==1)
			printf("Key Found!!!");
		else
		 printf("Not Found");
		
		
	}
}
