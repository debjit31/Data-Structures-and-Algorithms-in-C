#include<stdio.h>
#include<stdlib.h>
void search(int *, int);
int main()
{
	int *p,n,i;
	printf("Enter the number of elements = ");
	scanf("%d",&n);
	p=(int *)malloc(n*sizeof(int));
	printf("Enter the elements\n");
	for(i = 0;i<n;i++)
	 scanf("%d",(p+i));
	search(p,n);
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
	 printf("%d is found at %d position(SUCCESS)",item,(i+1));
	else
	 printf("Invalid Input(FAILURE)");
	
}
