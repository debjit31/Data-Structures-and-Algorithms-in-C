#include<stdio.h>
#include<stdlib.h>
void input(int *,int *,int);
void merge(int *,int *,int);
int main()
{
	int *a,*b,i,j,n;
	printf("Enter the size of the  array = ");
	scanf("%d",&n);
	a = (int *)malloc(n*sizeof(int));	
	b = (int *)malloc(n*sizeof(int));
	input(a,b,n);
}
void input(int *a,int *b,int n)
{
	int i;
	printf("Enter the elements of the first sorted array\n");
	for(i=0;i<n;i++)
		scanf("%d",(a+i));
	printf("Enter the elements of the second sorted array\n");
	for(i=0;i<n;i++)
		scanf("%d",(b+i));
	merge(a,b,n);
}
void merge(int *a,int *b,int n)
{
	int *p,i=0,j=0,k=0;
	p = (int *)malloc(2*n*sizeof(int));
	while(i<n&&k<2*n)
	{
		p[k]=a[i];
		i++;k++;
	}
	while(j<n&&k<2*n)
	{
		p[k] = b[j];
		k++;j++;
	}
	printf("The merged array is :- \n");
	for(i=0;i<2*n;i++)
		printf("%d\t",p[i]);
}
