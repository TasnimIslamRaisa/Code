//bfs
#include<bits/stdc++.h>
using namespace std;
#define MAX 10000
vector<int>g[MAX];
vector<bool> visited(100,false);
void bfs(int s) // s= source
{
    queue<int>q;
    q.push(s);
    visited[s]=true;
    while(!q.empty()){
        int v=q.front();
        cout<<v<<" ";
        q.pop();
        for(int i:g[v]){ //for(i=0;i<graph[u].size();i++)
            if(!visited[i]){
                q.push(i);
                visited[i]=true;
            }
        }
    }
}

int main()
{
    int node,edge;
    cout << "Enter the number of nodes and edges: ";
    cin>>node>>edge;
    cout << "Enter the graph: ";
    for(int i=0;i<edge;i++){
        int node1,node2;
        cin>>node1>>node2;
        g[node1].push_back(node2);
        g[node2].push_back(node1);
    }
    cout << "Enter the starting node: ";
    int source;
    cin>>source;
    cout << "BFS path is: ";
    bfs(source);
}
