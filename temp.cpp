//BREADTH FIRST SEARCH
//TAAA CS-A 26,27,51,55
#include<iostream>
#include <list>
using namespace std;
void BFS(int s,int V,list<int> *adj)
{
    bool *visited = new bool[V];
    for(int i = 0; i < V; i++)
        visited[i] = false;
    list<int> queue;
    visited[s] = true;
    queue.push_back(s);
    list<int>::iterator i;
    while(!queue.empty())
    {
        s = queue.front();
        cout << s << " ";
        queue.pop_front();
        for (i = adj[s].begin(); i != adj[s].end(); ++i)
        {
            if (!visited[*i])
            {
                visited[*i] = true;
                queue.push_back(*i);
            }
        }
    }
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
    int st;
    cout << "Enter the source node : ";
    cin >> st;
    cout << "Following is Breadth First Traversal\n";
    BFS(st,n,adj);
    return 0;
}
