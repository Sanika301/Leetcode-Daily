#include <bits/stdc++.h>
using namespace std;

class Graph{
    public:
    map<int,list<int>> adj;
    map<int,bool> visited;

    void addEdge(int,int);
    void DFS(int);
};


void Graph::addEdge(int u,int v)
{
    adj[u].push_back(v);
}

void Graph::DFS(int v)
{
    visited[v]=true;
    cout<<v<<" ";
    for(auto it=adj[v].begin();it!=adj[v].end();it++)
    {
        if(!visited[*it])
        DFS(*it);
    }
}

int main(int argc, char const *argv[])
{
    Graph g;
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(0,3);
    g.addEdge(1,0);
    g.addEdge(2,0);
    g.addEdge(2,3);
    g.addEdge(2,4);
    g.addEdge(3,0);
    g.addEdge(3,2);
    g.addEdge(4,2);
    g.DFS(2);

    return 0;
}
