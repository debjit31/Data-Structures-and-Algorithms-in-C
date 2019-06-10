#include<stdio.h>
#include<stdlib.h>
void display(int adj_mat[4][4], int n)
{
	int i,j ;
	printf("The Adjacency matrix for the given graph is :- \n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",adj_mat[i][j]);
		}
		printf("\n");
	}
}
int main()
{
	int i,j,n,node_name,adj_mat[4][4],r,c;
	char ch;
	printf("Enter the total number of nodes in the graph :- ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("Is Vertex %d connected with Vertex %d ? Press Y for yes and N for no.",i+1,j+1);
			fflush(stdin);
			scanf("%c",&ch);
			if (ch == 'Y' || ch == 'y')
				adj_mat[i][j] = 1;
			else if(ch == 'N' || ch == 'n')
				adj_mat[i][j] = 0;
		}
	}
	display(adj_mat,n);
}

