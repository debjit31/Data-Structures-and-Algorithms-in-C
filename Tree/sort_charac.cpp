#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct tree{
	char data;
	struct tree *left, *right;
}bst;
bst *root;
char name[20];
void insert();
void inorder(bst *);
void inorder(bst *root)  		/*Recursive Traversal*/
{
	if(root == NULL)
		return;
	inorder(root->left);
	printf("%c\t",root->data);
	inorder(root->right);
}
void insert()
{
	bst *nw, *ptr, *ptr1;
	int flag = 1,i;
	for(i=0;i<strlen(name);i++)
	{
		fflush(stdin);
		nw = (bst *)malloc(sizeof(bst));
		nw->data=name[i];
		nw->right=NULL;
		if(root == NULL)
			root = nw;
		else
		{
			ptr=root;
			ptr1=ptr;
			while(ptr)
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
	}
	inorder(root);
}
int main()
{
	root=NULL;
	int i;
	fflush(stdin);
	printf("Enter your name :- \n");
	gets(name);
	insert();
}
