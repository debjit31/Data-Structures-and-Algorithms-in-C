#include<stdio.h>
#include<stdlib.h>
void third_largest(int *,int);
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
	third_largest(p,n);
}
void third_largest(int *a, int n)
{
	int i,j,temp;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]<a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("The third largest element is = \n");
	printf("%d",a[2]);
	
}
