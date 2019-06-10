#include<stdio.h>
#include<stdlib.h>
void display(int * , int);
void re_alloc(int *, int);
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
	realloc(a,n);
}
void realloc(int *a, int n)
{
	int n1, i, *p;
	printf("Enter the new size of the array = ");
	scanf("%d",&n1);
	p = (int *)realloc(a,n1*sizeof(int));
	printf("Enter the remaining eleemnts\n");
	for(i=0;i<n1;i++)
	 scanf("%d",(p+i));
	
	printf("The new eleemnts added are :- \n");
	for(i=0;i<n1;i++)
		printf("%d",p[i]);
	 
	
	
}
