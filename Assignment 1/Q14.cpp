#include<stdio.h>
#include<stdlib.h>
void del(int *, int);
int main()
{
	int *p,n,i;
	printf("Enter the number of elements = ");
	scanf("%d",&n);
	p = (int *)malloc(n*sizeof(int));
	printf("Enter the elements\n");
	for(i=0;i<n;i++)
		scanf("%d",(p+i));
	del(p,n);
}
void del(int *a,int n)
{
	int pos,t,i;
	printf("Enter the location where you want to delete = ");
	scanf("%d",&pos);
	t=pos-1;
	for(i=t;i<n;i++)
	{
		a[i] = a[i+1];
	}
	printf("Array after deletion\n");
	for(i=0;i<n-1;i++)
	 printf("%d\t",a[i]);
}
