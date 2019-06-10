#include<stdio.h>
#define MAX 20
int q1[MAX], q2[MAX], front1 = -1, rear1 =  -1, front2 = -1, rear2 = -1;
void enqueue1(int x)
{
	if(rear1 == MAX-1)
		printf("Overflow!!!!");
	else
	{
		if(front1 == -1 && rear1 == -1)	
		{
			front1 = 0;
			rear1 = 0;
		}
		else
			rear1++;
		q1[rear1] = x;
	}
}
void enqueue2(int x)
{
	if(rear2 == MAX-1)
		printf("Overflow!!!!");
	else
	{
		if(front2 == -1 && rear2 == -1)	
		{
			front2 = 0;
			rear2 = 0;
		}
		else 
			rear2++;
		q2[rear2] = x;
	}
}
int dequeue1()
{
	if(front1 == -1 || front1 > rear1)
		printf("Underflow!!!");
	else
	{
		return q1[front1++];
	}
}
int dequeue2()
{
	if(front2 == -1 || front2 > rear2)
		printf("Underflow!!!");
	else
	{
		return q2[front2++];
	}
}
int main()
{
	int i,n,item,temp;
	char ch;
	printf("Enter the size of the stack :- ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter an item :- ");
		scanf("%d",&item);
		if(i==0)
			enqueue1(item);
		else
		{
			enqueue2(item);
			while(front1<=rear1)
			{
				temp = dequeue1();
				enqueue2(temp);
			}
			while(front2<=rear2)
			{
				temp = dequeue2();
				enqueue1(temp);
			}
		}
	}
	fflush(stdin);
	printf("Do you want to delete an item ?");
	scanf("%c",&ch);
	if(ch == 'y' || ch == 'Y')
	{
		item = dequeue1();
		printf("Deleted item is = %d\n",item);
	}
	printf("The Stack elements are :- \n");
	for(i=front1;i<=rear1;i++)
		printf("%d\t",q1[i]);
	
}
