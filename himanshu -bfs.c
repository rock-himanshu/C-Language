/*
Demostarte use of BFS for spanning tree.

Description-

BFS is use to find Shortest Path and Minimum Spanning Tree for unweighted graph.

In program
variable q[]: It is a status queue.
variable f: queue font end (act as black or transvesed vertex)
variable r: queue rear end (used for inserting value in status queue)
variable vistited[]: It define colour(0 white and 1 gray)
*/

#include<stdio.h>
int a[20][20], q[20], visited[20], n, i, j, f = -1, r = -1;
char g[20][20];

void bfs(int s) {
	//transversing vertex s (start)
	printf("%s-> ",g[s]);
	for(i = 1; i <= n; i++)
	{
		if(a[s][i] && !visited[i]) // Checking for vertex visit
			q[++r] = i;  // Updating status queue
	}

	if(f<=r){
		visited[s] = 1;   // updating color as gray or visited vertex
		// vertex s transvesed (completed)
		f=f+1;
		if(f<=r)
		bfs(q[f]);  // Taking subchild of parent vertex from status queue.
	}
}

int main() {
	int s,flag=0;
printf("\n\t\t********INPUT********\n\n");

printf("\n Enter the Total number of vertices : ");
	scanf("%d", &n);

printf("\n Enter the name of all vertices :\n");
	for(i=1;i<=n;i++)
	{
		scanf("%s",&g[i]);
		q[i] = 0;
		visited[i] = 0;
	}

printf("\n Input graph data in matrix form:\n  ");
	for(i=1;i<=n;i++)
		printf("%s ",g[i]);
	printf("\n");
	for(i=1; i<=n; i++) {
		printf("%s ",g[i]);
			for(j=1;j<=n;j++) {
				scanf("%d", &a[i][j]);
			}
		}

	printf("\nInput Position of Source Vertex(In number) : ");
	scanf("%d",&s);

  printf("\nVisiting sequence: ");
	bfs(s);

	printf("\n\t\t********OUTPUT********\n\n");
	printf("\n The node which are reachable are:\n");

	for(i=1;i<=n;i++) {
		if(!visited[i])
		{
			printf("Not Visited Node: %s\n", g[i]);
			flag=1;
		}
	}
	if(flag==0)
		printf("\nResult:Spanning tree is possible with source node by BFS");
	else
		printf("\nResult:BFS is not Possible with source node.");
	return 0;
}
