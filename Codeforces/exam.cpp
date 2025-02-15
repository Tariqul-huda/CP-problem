#include<bits/stdc++.h>
#define vertices 7
using namespace std;
int graph[vertices][vertices];
void addEdge(int src,int dest,int wgt)
{
    graph[src][dest] = wgt;
    graph[dest][src] = wgt;
}
int main()
{
     addEdge(0, 1, 28);
    addEdge(1, 2, 16);
    addEdge(2, 3, 12);
    addEdge(3, 4, 22);
    addEdge(4, 5, 25);
    addEdge(0, 5, 10);
    addEdge(1, 6, 14);
    addEdge(4, 6, 24);
    addEdge(3, 6, 18);
    bool visited[vertices] = {false};
    int no_edges = 0;
    visited[0] = true;
    int x,y;
    while(no_edges<vertices-1)
    {
        x=y=0;
        int minn = INT_MAX;
        for(int src=0;src<vertices;src++)
        {
            if(visited[src])
            {
            for(int dest = 0;dest<vertices;dest++)
            {
                if(!visited[dest] && graph[src][dest])
                {
                    if(graph[src][dest]<minn)
                    {
                        minn = graph[src][dest];
                        x = src;
                        y = dest;
                    }
                }

            }
       }
        }
        printf("(%d,%d)->%d\n",x,y,graph[x][y]);
        visited[y]=true;
        no_edges++;
    }
}