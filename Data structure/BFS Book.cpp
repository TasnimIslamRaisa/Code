// shortest path from source to each node
//shortest path from source to destination
#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
using namespace std;
vector<int>G[1000];
vector<int>path;
queue<int>q;
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
    int distance[nodes],parent[nodes];
    visited[source]=1;
    distance[source]=0;
    parent[source]=-1;
    q.push(source);
    while(!q.empty()){
        int v=q.front();  //the node we'll pop =v ;(source)
        q.pop();
        for(int j=0;j<G[v].size();j++){
            int u=G[v][j];        //u=G[SOURCE][0]
            if(!visited[u]){
                visited[u]=1;
                q.push(u);
                distance[u]=distance[v]+1;
                parent[u]=v;
            }
        }
    }
    for(int i=0;i<nodes;i++){
        cout<<"Shortest path from "<<source<<" to : "<<i<<" : ";
        cout<<distance[i]<<endl;
    }
    int destination;
    cout<<"Enter destination : ";
    cin>>destination;
    if(visited[destination]==0)
        cout<<"No path "<<endl;
    else{
        cout<<"Shortest path from "<<source<<" to "<<destination<<" : ";
        while(destination!=-1){
            path.push_back(destination);
            destination=parent[destination];
        }
        reverse(path.begin(),path.end());
        }
        for(int i=0;i<path.size();i++){
            cout<<path[i]<<" ";
        }
        cout<<endl;
    return 0;
}
