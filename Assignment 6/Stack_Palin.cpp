#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define size 100
char stack[size], top = -1;
void push(char item)
{
	if(top==size-1)
		printf("Stack Overflow!!!!");
	else
	stack[++top]=item;
}
int pop()
{
	char e;
	if(top==-1)
		printf("Underflow");
	else
	{
		e = stack[top--];
		return e;
	}
}
void palindrome_checker(char str[20],int n)
{
	int i,flag=1;
	for(i=0;i<n;i++)
		push(str[i]);
	for(i=0;i<n/2;i++)
	{
		if(str[i]!=stack[top--])
		{
			flag=0;
			break;
		}
	}
	if(flag==1)
		printf("Palimdrome String!!!");
	else
		printf("Not Palindrome!!!");
}
int main()
{
	char s[20];
	int len;
	printf("Enter a string :- ");
	gets(s);
	len=strlen(s);
	palindrome_checker(s,len);
}
