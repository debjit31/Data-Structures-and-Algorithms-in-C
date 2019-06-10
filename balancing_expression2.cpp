#include<stdio.h>
#include<stdlib.h>
char stack[100];
int top = -1;
void p(char  item )
{
	stack[top++] = item;
}
void p1()
{
	if(top == -1)
	{
		printf("expression invalid!!!\n");
		exit(0);
	}
	else
		top--;
}
void t()
{
	if(top == -1)
		printf("Valid Expression!!!!");
	else
		printf("Expression Invalid");
}
int main()
{
	fflush(stdin);
	char input[100];
	int i;
	printf("Enter the expression :- \n");
	gets(input);
	for(i=0; input[i]!='\0'; i++)
	{
		if(input[i] == '(' || input[i] == '{' || input[i] == '[')
		  p(input[i]);
		else if (input[i] == ')' || input[i] == '}' || input[i] == ']')
			p1();
	}
	t();
	
}
