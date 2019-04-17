/*
Demostarte use of DFS for spanning tree.

Description-

DFS is use to create Shortest Path and find Minimum Spanning Tree for unweighted graph.

In program
We are visiting each node sub child first.
if : no sub child found
then : it will backtrack
else : it will visit another sub child.
*/
#include<stdio.h>

void DFS(int);
int G[10][10],visited[10],n;
char v[10][10];
int main()
{
  int s,flag=0,i,j;
  printf("\n\t\t********INPUT********\n\n");

  printf("\n Enter the Total number of vertices : ");
    scanf("%d", &n);

  printf("\n Enter the name of all vertices :\n");
    for(i=1;i<=n;i++)
    {
      scanf("%s",&v[i]);
      visited[i] = 0;
    }

  printf("\n Input graph data in matrix form:\n  ");
    for(i=1;i<=n;i++)
      printf("%s ",v[i]);
    printf("\n");
    for(i=1; i<=n; i++) {
      printf("%s ",v[i]);
        for(j=1;j<=n;j++) {
          scanf("%d",&G[i][j]);
        }
      }

    printf("\nInput Position of Source Vertex(In number) : ");
    scanf("%d",&s);

	printf("\n\t\t********OUTPUT********\n\n");
    printf("\nVisiting sequence: ");
  DFS(s);

  for(i=1;i<=n;i++) {
		if(!visited[i])
    {
			printf("Not Visited Node: %s\n", v[i]);
			flag=1;
		}
	}
	if(flag==0)
		printf("\nResult:Spanning tree is possible with source node by DFS");
	else
		printf("\nResult:DFS is not Possible with source node.");
return 0;
}
void DFS(int i)
{
    int j;
    printf("%s",v[i]);
    visited[i]=1;
    for(j=1;j<=n;j++)
    {
       if(G[i][j] && !visited[j])
       {
          printf("-> ");
       	   DFS(j);
       }
    }
}
