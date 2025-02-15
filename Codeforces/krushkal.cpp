#include<bits/stdc++.h>
using namespace std;

class Graph
{
    int v;
    vector<vector<int>> edges;
    int *parent;
    public:
    Graph(int v)
    {
        this->v = v;
        parent = new int[v];
    }
    void addEdge(int src,int dest,int wgt)
    {
        edges.push_back({wgt,src,dest});
    }
    void show_edge(){
        for(auto edge:edges)cout<<edge[1]<<" ->"<<edge[1]<<" : "<<edge[0]<<endl;
    }
    int findSet(int i)
    {
        if(parent[i]== -1)return i;
        return findSet(parent[i]);
    }
    void unionSet(int x,int y)
    {
        int s = findSet(x);
        int d = findSet(y);
        if(s!=d)parent[d]=s;
    }
    void krushkal()
    {
        for(int i=0;i<v;i++)
        parent[i] = -1;
        int totalCost = 0;
        sort(edges.begin(),edges.end());
        for(auto edge:edges)
        {
            int src = edge[1];
            int dest = edge[2];
            int wgt = edge[0];
            if(findSet(src)!=findSet(dest))
            {
                totalCost+=wgt;
                cout<<src<<" ->"<<dest<<": "<<wgt<<endl;
                unionSet(src,dest);
            }
        }
        cout<<"Total cost of MST: "<<totalCost<<endl;
    }

};

int main()
{
        Graph g(4);

    g.addEdge(0, 1, 4);
    g.addEdge(1, 2, 5);
    g.addEdge(2, 3, 9);
    g.addEdge(3, 0, 6);
    g.addEdge(3, 1, 7);

    g.krushkal();
    return 0;
}