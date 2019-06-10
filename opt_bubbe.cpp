#include<stdio.h>
#include<stdlib.h>
void swap(int *x, int *y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}
void bubble_sort(int *p, int n)
{
	int i,j;
	bool swapped;
	for(i=0;i<n-1;i++)
	{
		swapped = false;
		for(j=0;j<n-i-1;j++)
		{
			if(p[j] > p[j+1])
			{
				swap(&p[j],&p[j+1]);
				swapped = true;
			}
		}
		if(swapped == false)
			break;
	}
}
void printarray(int *p,int n)
{
	int i;
	for(i =0 ;i<n;i++)
	 printf("%d\t",p[i]);
}
int main()
{
	int n, *a, i;
	printf("Enter the number of elements = ");
	scanf("%d",&n);
	a = (int *)malloc(n*sizeof(int));
	printf("Enter %d elements : - \n",n);
	for(i=0;i<n;i++)
		scanf("%d",(a+i));
	bubble_sort(a,n);
	printf("Sorted Array :- \n");
	printarray(a,n);
	
}
