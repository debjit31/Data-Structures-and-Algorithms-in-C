#include<stdio.h>
#include<stdlib.h>
#define MAX 10
int stack1[MAX],stack2[MAX],top1=-1,top2=-1;
void push1(int item)
{
	if(top1==MAX-1)
		printf("Overflow");
	else
		stack1[++top1]=item;
}
void push2(char item1)
{
	if(top2==MAX-1)
		printf("Overflow!!!!");
	else
		stack2[++top2]=item1;
}
int pop1()
{
	int e;
	if(top1==-1)
		printf("Underflow!!!");
	else
	{
		e=stack1[top1--];
		return e;
	}
}
int pop2()
{
	int r;
	if(top2==-1)
		printf("Underflow!!!");
	else
	{
		r=stack2[top2--];
		return r;
	}
}
void display()
{
	int i;
	if(top1==-1)
		printf("Empty Stack!!!");
	else
	{
		for(i=top1;i>=0;i--)
		{
			printf("%d\t",stack1[i]);
		}
	}
}
void convert_to_postfix()
{
	char temp,x;
	while(top1!=-1)
	{
		temp=pop1();
		if(top2==-1)
			push2(temp);
		else
		{
			if(temp>stack2[top2])	
				push2(temp);
			else
			{
				while(top2!=-1)
				{
					if(temp<stack2[top2])
					{
						x=pop2();
						push1(x);
					}
					else
						break;
				}
				push2(temp);
			}
		}
	}
	while(top2!=-1)
	{
		x=pop2();
		push1(x);
	}
}
int main()
{
	int n,i,e;
	printf("Enter the number of items to be sorted = ");
	scanf("%d",&n);
	printf("Enter the numbers :- ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&e);
		push1(e);
	}
	display();
	convert_to_postfix();
	printf("\nSorted stack is :- \n");
	display();
}
