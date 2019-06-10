#include<stdio.h>
#include<stdlib.h>
void min_number(int *,int);
int main()
{
	int *p,n,i;
	printf("Enter the number of elements = ");
	scanf("%d",&n);
	p = (int *)malloc(n*sizeof(int));
	printf("Enter the elements\n");
	for(i=0;i<n;i++)
		scanf("%d",(p+i));
	printf("The array  elements are\n");
	for(i=0;i<n;i++)
		printf("%d\t",p[i]);
	printf("\n");
	min_number(p,n);
}
void min_number(int *a, int n)
{
	int min,i;
	min = a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]<min)
			min = a[i];
	}
	printf("The minimum element is = %d",min);
}
