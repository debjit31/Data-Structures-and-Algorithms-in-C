#include<stdio.h>
#include<stdlib.h>
void display(int * , int);
int main()
{
	int *p, n, i;
	printf("Enter the number of elements = ");
	scanf("%d",&n);
	p = (int *)malloc(n*sizeof(int));
	printf("\n%u",p);
	printf("Enter the elements\n");
	for(i=0;i<n;i++)
	 scanf("%d",(p+i));
	 display(p,n);
	 /*free(p);
	 printf("%u",p);*/
}
void display(int *a, int n)
{
	int i;
	printf("\n%u",a);
	printf("The array elements are :-\n");
	for(i=0;i<n;i++)
		printf("%d\t",a[i]);	
	free(a);
	printf("%u",a);
}
