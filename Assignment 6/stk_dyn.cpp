#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int top = -1;
void push(int *stack,int item,int n)
{
	if(top==n-1)
		printf("Stack Overflow!!!!");
	else
	stack[++top]=item;
}
int pop(int *stack)
{
	int e;
	if(top==-1)
		printf("Underflow");
	else
	{
		e = stack[top--];
		return e;
	}
}
void display(int *stack)
{
	int i;
	if(top==-1)
	 printf("\nThe Stack is underflow!!!");
	else
	{
	 	printf("\nThe Stack elements are :-\n");
		 for(i=top;i>=0;i--)
	 	printf("%d\t",stack[i]);
	}
}
int main()
{
	int *stk,n,i,item;
	char y,e,ch;
	printf("Enter the size of the stack = ");
	scanf("%d",&n);
	stk=(int *)malloc(n*sizeof(int));
	printf("Enter the elements in the stack :- ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&item);
		push(stk,item,n);
	}
	while(1)
	{
		printf("\nDo you want to pop any item?\n");
		getchar();
		scanf("%c",&y);
		if(y=='y'||y=='Y')
		{
			e=pop(stk);
			printf("\nPopped item is = %d",e);
			display(stk);
			if(top==-1)
			{
				printf("Stack Underflow!!!!");
				break;
			}
		}
		else
		{
			display(stk);
			printf("\nDo you want to exit?\n");
			getchar();
			scanf("%c",&ch);
			if(ch=='y'||ch=='Y')
				exit(1);
			else
				continue;
		}
			
	}		
}
