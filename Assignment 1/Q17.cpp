#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
	int *p[20],temp, flag=1;
	int n,i,j;
	printf("Enter the size of the array = ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		p[i] = (int *)malloc(n*sizeof(int));
	}
	for(j=0;j<n*n;)
		{
			printf("Enter Age = ");
			scanf("%d",&temp);
			if(temp>=10&&temp<=20)
			{
				 p[0][j] = temp;
				 j++;
		    }
			else if(temp>=21&&temp<=30)
			{
				p[1][j] = temp;
				j++;
			}
			else if(temp>=31&&temp<=40)
			{
			 	p[2][j] = temp;
			 	j++;
			}
			else
			{
			 	printf("Invalid Age");
			 	flag=0;
			 	break;
			}
		}
	printf("The array elements are\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",p[i][j]);
		}
		printf("\n");
	}
}
