#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
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
char pop()
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
int is_operator(char symbol)
{
	if(symbol == '^' || symbol == '*' || symbol == '/' || symbol == '+' || symbol =='-')
		return 1;
	else
		return 0;

}
int precedence(char symbol)
{
	if(symbol=='^')
		return 3;
	else if(symbol=='*'||symbol=='/')
		return 2;
	else if(symbol=='+'||symbol=='-')
		return 1;
	else
		return 0;
}
void InfixToPostfix(char infix_exp[], char postfix_exp[])
{ 
	int i, j;
	char item;
	char x;

	push('(');                              
	strcat(infix_exp,")");                  

	i=0;
	j=0;
	item=infix_exp[i];         /* initialize before loop*/

	while(item != '\0')        /* run loop till end of infix expression */
	{
		if(item == '(')
		{
			push(item);
		}
		else if( isdigit(item) || isalpha(item))
		{
			postfix_exp[j] = item;              /* add operand symbol to postfix expr */
			j++;
		}
		else if(is_operator(item) == 1)        /* means symbol is operator */
		{
			x=pop();
			while(is_operator(x) == 1 && precedence(x)>= precedence(item))
			{
				postfix_exp[j] = x;                  /* so pop all higher precendence operator and */
				j++;
				x = pop();                       /* add them to postfix expresion */
			}
			push(x);
			/* because just above while loop will terminate we have
			oppped one extra item
			for which condition fails and loop terminates, so that one*/

			push(item);                 /* push current oprerator symbol onto stack */
		}
		else if(item == ')')         /* if current symbol is ')' then */
		{
			x = pop();                   /* pop and keep popping until */
			while(x != '(')                /* '(' encounterd */
			{
				postfix_exp[j] = x;
				j++;
				x = pop();
			}
		}
		else
		{ /* if current symbol is neither operand not '(' nor ')' and nor
			operator */
			printf("\nInvalid infix Expression.\n");        /* the it is illegeal  symbol */
			getchar();
			exit(1);
		}
		i++;


		item = infix_exp[i]; /* go to next symbol of infix expression */
	} /* while loop ends here */
	if(top>0)
	{
		printf("\nInvalid infix Expression.\n");        /* the it is illegeal  symbol */
		getchar();
		exit(1);
	}
	if(top>0)
	{
		printf("\nInvalid infix Expression.\n");        /* the it is illegeal  symbol */
		getchar();
		exit(1);
	}


	postfix_exp[j] = '\0'; /* add sentinel else puts() fucntion */
	/* will print entire postfix[] array upto SIZE */

}

int main()
{
	char infix[30],postfix[30];
	printf("Enter the infix expression :- ");
	gets(infix);
	
	InfixToPostfix(infix,postfix);
	printf("Postfix Expression :- ");
	puts(postfix);
	
}
