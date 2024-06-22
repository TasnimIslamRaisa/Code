// Dijkstra's Algorithm in C
#include <bits/stdc++.h>
using namespace std;
#define INFINITY 9999
#define MAX 10
void Dijkstra(int Graph[MAX][MAX], int n, int start)
{
    int cost[MAX][MAX], distance[MAX];
    int visited[MAX], count, mindistance, nextnode, i, j;
    // Creating cost matrix
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            if (Graph[i][j] == 0)
                cost[i][j] = INFINITY;
            else
                cost[i][j] = Graph[i][j];

    for (i = 0; i < n; i++)
    {
        distance[i] = cost[start][i];
        visited[i] = 0;
    }
    distance[start] = 0;
    visited[start] = 1;
    count = 1;
    while (count < n - 1)
    {
        mindistance = INFINITY;
        for (i = 0; i < n; i++)
            if (distance[i] < mindistance && !visited[i])
            {
                mindistance = distance[i];
                nextnode = i;
            }

        visited[nextnode] = 1;
        for (i = 0; i < n; i++)
            if (!visited[i])
                if (mindistance + cost[nextnode][i] < distance[i])
                {
                    distance[i] = mindistance + cost[nextnode][i];
                }
        count++;
    }
    // Printing the distance
    for (i = 0; i < n; i++)
        if (i != start)
        {
            cout<<"Distance from source to " <<i<< ": "<< distance[i]<<endl;
        }
}
int main()
{
    int Graph[MAX][MAX], i, j, n, u;
    cout<<"Enter number of nodes: ";
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<endl;
            cout<<"enter value for graph "<<i<<" "<<j<<": ";
            cin>>Graph[i][j];
        }
    }
    cout<<"Enter starting point: ";
    cin>>u;
    Dijkstra(Graph, n, u);

    return 0;
}
