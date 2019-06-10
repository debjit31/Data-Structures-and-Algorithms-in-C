#include<stdio.h>
#include<stdlib.h>
void display(int * , int);
int main()
{
	int *p, n, i;
	printf("Enter the number of elements = ");
	scanf("%d",&n);
	p = (int *)malloc(n*sizeof(int));
	printf("Enter the elements\n");
	for(i=0;i<n;i++)
	 scanf("%d",(p+i));
	display(p,n);
}
void display(int *a, int n)
{
	int i;
	printf("The array elements are :-\n");
	for(i=0;i<n;i++)
		printf("%d\t",a[i]);	
}

