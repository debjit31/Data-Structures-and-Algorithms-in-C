#include<stdio.h>
int main()
{
	int adj_mat[4][4],i,j,n,ch;
	printf("Enter the total number of vertices :- ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("Is Vertex %d connected with Vertex %d ? Press 1 for yes and 0 for no.",i+1,j+1);
			scanf("%d",&ch);
			if (ch == 1)
				adj_mat[i][j] = 1;
			else
				adj_mat[i][j] = 0;
		}
	}
	printf("the Adjacency matrix is :- \n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",adj_mat[i][j]);
		}
		printf("\n");
	}
}
