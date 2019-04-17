//TO CHECK CYCLE EXISTS IN THE GRAPH OR NOT
//TAAA CS-A 26,27,51,55
#include<iostream>
#include <list>
#include <limits.h>
using namespace std;
list<int> *adj;
bool isCyclicUtil(int v, bool visited[], bool *recStack)
{
    if(visited[v] == false)
    {
        visited[v] = true;
        recStack[v] = true;
        list<int>::iterator i;
        for(i = adj[v].begin(); i != adj[v].end(); ++i)
        {
            if ( !visited[*i] && isCyclicUtil(*i, visited, recStack) )
                return true;
            else if (recStack[*i])
                return true;
        }
    }
    recStack[v] = false;
    return false;
}
bool isCyclic(int V)
{
    bool visited[V];
    bool recStack[V];
    for(int i = 0; i < V; i++)
    {
        visited[i] = false;
        recStack[i] = false;
    }
    for(int i = 0; i < V; i++)
        if (isCyclicUtil(i, visited, recStack))
            return true;

    return false;
}
int main()
{
    int n,e,a,b,i;
    cout << "Enter the number of nodes and edges";
    cin >> n >> e;

    adj=new list<int> [n];
        for(i=0;i<e;i++)
    {
        cout << "Enter source and destination node : ";
        cin >> a >> b;
        adj[a].push_back(b);
    }
    if(isCyclic(n))
        cout << "Graph contains cycle";
    else
        cout << "Graph doesn't contain cycle";
    return 0;
}
