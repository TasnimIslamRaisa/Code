// DFS (depth first search)
#include<iostream>
#include<vector>
#include<stack>
using namespace std;
vector<int>G[1000];
vector<int>path;
stack<int>s;
int main()
{
    int nodes,edges,source;
    cout<<"Enter the number of nodes : ";
    cin>>nodes;
    cout<<"Enter the number of edges : ";
    cin>>edges;
    cout<<"Enter the nodes : "<<endl;
    while(edges!=0){
        int x,y;
        cin>>x>>y;
        G[x].push_back(y);
        edges--;
    }
    cout<<"Enter source : ";
    cin>>source;
    int visited[nodes]={0};
    visited[source]=1;
    s.push(source);
    while(!s.empty()){
        int v=s.top();
        cout<<v<<" ";
        s.pop();
        for(int j=0;j<G[v].size();j++){
            int u=G[v][j];
            if(!visited[u]){
                visited[u]=1;
                s.push(u);
            }
        }
    }
    return 0;
}

