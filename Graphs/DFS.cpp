#include<bits/stdc++.h>
using namespace std;

class Graph{
    public:
        map<int,bool> visited;
        map<int,list<int>> adj;

        void addEdge( int v , int w );
        void DFS( int v );
};

void Graph::addEdge( int v , int w ){
    adj[v].push_back(w);
    adj[w].push_back(v);
    return;
}

void Graph::DFS(int v){

    visited[v] = true;
    cout << v << " ";
    list<int>::iterator it;
    for( it=adj[v].begin() ; it != adj[v].end() ; ++it ){

        if( !visited[*it] ){
            DFS(*it);
        }
    }
    return;
}

int main (){

    Graph g;
    g.addEdge( 0 , 1 );
    g.addEdge( 0 , 2 );
    g.addEdge( 1 , 2 );
    g.addEdge( 1 , 3 );
    g.addEdge( 2 , 3 );
    g.addEdge( 3 , 4 );

    g.DFS( 1 );
    return 0;
}