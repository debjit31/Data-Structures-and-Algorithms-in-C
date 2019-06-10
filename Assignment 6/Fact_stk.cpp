#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#define size 100
char stack[size], top = -1;
void push(int item)
{
	if(top==size-1)
		printf("Stack Overflow!!!!");
	else
	stack[++top]=item;
}
int pop()
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
void factorial(int num)
{
	int f=1;
	if(num>0)
	{
		while(num!=0)
		{
			push(num);
			num--;
		}
		if(num==0&&top!=size-1)
		{
			while(top!=-1)
			{
				f=f*pop();
			}
		}
	}
	printf("Factorial = %d",f);
}
	
	

int main()
{
	int n ;
	printf("Enter a number = ");
	scanf("%d",&n);
	factorial(n);
}
