#include<stdio.h>
void towerofhanoi(int n,char from_rod,char to_rod,char aux_rod)
{
	if(n==1)
	{
		printf("\nMove Disk 1 from rod %c to rod %c",from_rod,to_rod);
		return;
	}
	towerofhanoi(n-1,from_rod,aux_rod,to_rod);
	printf("\nMove Disk %d from rod %c to rod %c",n,from_rod,to_rod);
	towerofhanoi(n-1,aux_rod,to_rod,from_rod);
}
int main()
{
	int n;
	printf("Enter the number of disks = ");
	scanf("%d",&n);
	towerofhanoi(n,'A','C','B');
}

