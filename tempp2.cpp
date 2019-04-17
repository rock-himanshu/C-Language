//DEPTH FIRST SEARCH
//TAAA CS-A 26,27,51,55
#include<iostream>
#include<list>
using namespace std;
void DFS(int v, bool visited[],int V,list<int> *adj)
{
    visited[v] = true;
    cout << v << " ";
    list<int>::iterator i;
    for (i = adj[v].begin(); i != adj[v].end(); ++i)
        if (!visited[*i])
            DFS(*i, visited,V,adj);
}

int main()
{
    int n,e,a,b,i;
    list<int> *adj;
    cout << "Enter the number of nodes and edges";
    cin >> n >> e;
    adj = new list<int>[n];
    for(i=0;i<e;i++)
    {
        cout << "Enter source and destination node : ";
        cin >> a >> b;
        adj[a].push_back(b);
    }
    bool *visited = new bool[n];
    for (int i = 0; i < n; i++)
        visited[i] = false;
    int st;
    cout << "Enter the source node : ";
    cin >> st;
    cout << "Following is Depth First Traversal\n";
    DFS(st,visited,n,adj);
    return 0;
}

