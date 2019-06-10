#include<stdio.h>
#include<stdlib.h>
typedef struct tree{
	int data;
	struct tree *left, *right;
}bst;
bst *root;
int *input;
void inorder(bst *root)
{
	if (root==NULL)
		return;
	inorder(root->left);
	printf("%d\t",root->data);
	inorder(root->right);
}
void to_tree(int n)
{
	int i,c=0;
	bst *nw,*ptr,*ptr1;
	for(i=0;i<n;i++)
	{
		fflush(stdin);
		nw=(bst*)malloc(sizeof(bst));
		nw->data=input[i];
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
				if(ptr->data>nw->data)
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
	inorder(root);
}
int main()
{
	int i,n;
	root=NULL;
	printf("Enter the number of integers = ");
	scanf("%d",&n);
	input=(int *)malloc(n*sizeof(int));
	printf("Enter %d integers :- \n",n);
	for(i=0;i<n;i++)
		scanf("%d",&input[i]);
	to_tree(n);
}
