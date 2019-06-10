#include<stdio.h>
#include<stdlib.h>
void display(int * , int);
void search(int *,int);
int main()
{
	int *p, n, i;
	printf("Enter the number of elements = ");
	scanf("%d",&n);
	p = (int *)calloc(n, sizeof(int));
	printf("Enter the elements\n");
	for(i=0;i<n;i++)
	 scanf("%d",(p+i));
	 display(p,n);
	 search(p,n);
}
void display(int *a, int n)
{
	int i;
	printf("The array elements are :-\n");
	for(i=0;i<n;i++)
		printf("%d\t",a[i]);	
}
void search(int *a,int n)
{
	int item,i,flag=1;
	printf("\nEnter the item to be searched = ");
	scanf("%d",&item);
	for(i=0;i<n;i++)
	{
		if(a[i]==item)
		{
			flag=0;
			break;
		}
	}
	if(flag==0)
	 printf("%d is found(SUCCESS)",item);
	else
	 printf("Invalid Input(FAILURE)");
}
