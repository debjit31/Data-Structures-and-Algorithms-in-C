#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int top = -1;
char stack[100];
void p1(char);
void p3();
void t();
int main()
{
	int i;
	char a[100];
	printf("enter expression\n");
	scanf("%s", &a);
	for (i = 0; a[i] != '\0';i++)
	{	
		if (a[i] == '(')
		{
			p1(a[i]);
		}
		else if (a[i] == ')')
		{
			p3();
		}
	}
	t();
}
void p1(char a)
{
	stack[top] = a;
	top++;
}
void p3()
{
	if (top == -1)
	{
		printf("expression is invalid\n");
		exit(0);
	}
	else	
	{
		top--;
	}
}
void t()
{
	if (top == -1)
		printf("\nexpression is valid\n");
	else
		printf("\nexpression is invalid\n");
}
