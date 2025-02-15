#include<bits/stdc++.h>
using namespace std;
class Graph
{
    int v;
    list<pair<int,int>>*edges;
    public:
    Graph(int v)
    {
        this->v = v;
        edges = new list<pair<int,int>>[v];
    }
    void addEdge(int src,int dest,int wght)
    {
        edges[src].push_back({dest,wght});
    }
    void dijkstra(int src)
    {
        vector<int>dist(v,INT_MAX);
        set<pair<int,int>>s;
        dist[src] = 0;
        s.insert({0,src});
        while(!s.empty())
        {
            auto s1 = s.begin();
            int c_dist = s1->first;
            int node = s1->second;
            s.erase(s1);
            for(auto nbrPair:edges[node])
            {
                int nbr = nbrPair.first;
                int cost = nbrPair.second;
                if(cost+c_dist<dist[nbr])
                {
                    auto f = s.find({dist[nbr],nbr});
                    if(f!=s.end())s.erase(f);
                    dist[nbr] = c_dist + cost;
                    s.insert({dist[nbr],nbr});
                }
            }
        }
        for (int i=0; i<v; i++)
            cout << "Node " << i << " is at dist " << dist[i] << endl;
    }
};
int main()
{
        Graph g(5);
    g.addEdge(0,1,2);
    g.addEdge(0,2,3);
    g.addEdge(0,3,4);
    g.addEdge(1,2,5);
    g.addEdge(2,3,6);
    g.addEdge(3,4,7);

    g.dijkstra(0);
}