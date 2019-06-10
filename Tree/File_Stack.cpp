#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void display();
void operations();
int stack[10],top=-1;
struct Stack_ins{
	char op[20],ele[10];
}stk[10];
void push(char item)
{
	if(top==6)
		printf("Overflow!!!");
	else
		stack[++top]=item;
}
int pop()
{
	int e;
	if(top==-1)
		printf("Underflow!!!");
	else
	{
		e=stack[top--];
		return e;
	}
}
int main()
{
	FILE *fp;
	char ch,op[10],ele[10];
	int i=0;
	fp=fopen("Stack_cmds.txt","r");
	if (fp==NULL)
		printf("File does not exists!!!!");
	while(!feof(fp))
	{
		fscanf(fp,"%s%s",stk[i].op,stk[i].ele);
		i++;
	}
	display();
	operations();
}
void operations()
{
	int i,element,t;
	char ch;
	for(i=0;i<10;i++)
	{
		if(strcmp(stk[i].op,"push")==0)
		{
			element=atoi(stk[i].ele);
			push(element);
		}
		else if(strcmp(stk[i].op,"pop")==0&&strcmp(stk[i].ele,"-")==0)
		{
			t=pop();
			printf("Popped item is = %d\n",t);
		}
	}
	printf("\nDo you want to display the stack?\nPress Y for yes and N for No.");
	scanf("%c",&ch);
	if(ch=='y'||ch=='Y')
	{
		int i=0;
		printf("\nThe Stack elements are :- \n");
		for(i=top;i>=0;i--)
			printf("%d\n",stack[i]);
	}
}
void display()
{
	int i;
	printf("\t\t\tThe following stack operations are to be performed :- \n\n");
	printf("Operation\tElement\n");
	printf("-----------------------------");
	printf("\n");
	for(i=0;i<7;i++)
		printf("%s\t\t%s\n",stk[i].op,stk[i].ele);
	printf("\n");
}
