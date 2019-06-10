#include<stdio.h>
#include<stdlib.h>
void create();
typedef struct tree{
	int data;
	struct tree *left, *right;
}bst;
bst *root;
void inorder(bst *);
void preorder(bst *);
void postorder(bst *);
int main()
{
	int ch;
	root=NULL;
	while(1)
	{
		printf("\n1.Create\n2.Inorder Traversal\n3.Preoder Traversal\n4.Postorder Traversal\n5.Exit\nEnter your Choice :- ");
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
				preorder(root);
			break;
			case 4:
				postorder(root);
			break;
			case 5:
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
void preorder(bst *root)
{
	if(root == NULL)
		return;
	printf("%d\t",root->data);
	preorder(root->left);
	preorder(root->right);
}
void postorder(bst *root)
{
	if(root == NULL)
		return;
	postorder(root->left);
	postorder(root->right);
	printf("%d\t",root->data);
}
