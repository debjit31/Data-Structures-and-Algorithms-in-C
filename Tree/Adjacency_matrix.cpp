#include<stdio.h>
int main()
{
	int n,adj[10][10],i,j,ch,ver;
	printf("Enter the total number of vertices :- ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		while(1)
		{
				printf("\nAre there any vertices connected with Vertex %d ?Press 1 for yes and 0 for no :- ",i);
				scanf("%d",&ch);
				if (ch == 1)
				{
					printf("\nEnter the vertex connected with vertex %d :- ",i);
					scanf("%d",&ver);
					for(j=1;j<=ver;j++)
					{
						if(j==ver)
							adj[i][j]=1;
						else
							adj[i][j]=0;
					}
				}
				else
				{
					break;
				}
		}
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			printf("%d\t",adj[i][j]);
		}
		printf("\n");
	}
}
