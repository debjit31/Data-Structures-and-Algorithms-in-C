#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct tree *left, *right;
};
struct node *root;
struct node* newNode(int item)
{
	struct node *nw;
	nw=(struct node*)malloc(sizeof(struct node));
	nw->data=item;
	nw->left=NULL;
	nw->right=NULL;
	return nw;
}
struct node* insert(struct node *node, int data)			/*recursive function to insert the node*/
{
	if(node == NULL)
		return newNode(data);
	else if(data<node->data)
		node->left = insert(node->left, data);
	else if (data>node->data)
		node->right = insert(node->right,data);
	return node;
}
int main()
{
	char choice;
	int data;
	root  = NULL;
	while(1)
	{
		printf("Do you want to insert a node ? ");
		scanf("%c",&choice);
		printf("Enter a number = ");
		scanf("%d",&data);
		insert(root,data);
	}
}
