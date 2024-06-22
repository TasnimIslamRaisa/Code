//DFS
#include<bits/stdc++.h>
using namespace std;
#define max 10000
vector<int >g[max];
vector<bool>visited(50,false);
void dfs(int s)
{
    cout<<s<<" ";
    visited[s]=true;
    for(int i:g[s]){
        if(!visited[i]){
            dfs(i);
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
    cout << "DFS path is: ";
    dfs(source);
}

