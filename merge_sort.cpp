#include<stdio.h>
#define MAX 7
void merge(int[], int , int , int );
void merge_sort(int[], int , int);
int a[MAX], b[MAX];
int main()
{
	int i, low = 0, high = MAX-1;
	printf("Enter %d integer :- \n",MAX);
	for(i=0;i<MAX;i++)
		scanf("%d",&a[i]);
	merge_sort(a,low,high);
	for(i=0;i<MAX;i++)
		printf("%d\t",a[i]);
}
void merge_sort(int a[MAX], int low, int high)
{
	int mid;
	if(low<high)
	{
		mid=(low+high)/2;
		merge_sort(a,low,mid);
		merge_sort(a,mid+1,high);
		merge(a,low,mid,high);
	}
}
void merge(int a[MAX], int low, int mid, int high)
{
	int i,j,k;
	i=low;
	j=mid+1;
	k=0;
	while(i<=mid&&j<=high)
	{
		if(a[i]<a[j])
			b[k++] = a[i++];
		else
			b[k++] = a[j ++];
	}
	while(i<=mid)
		b[k++] = a[i++];
	while(j<=high)
		b[k++] = a[j++];
	for(i=low,j=0;i<=high;i++,j++)
		a[i] = b[j];
}

