#include<bits/stdc++.h>
using namespace std;
#define Inf 1e9
typedef pair<int, int> Pair;
class Graph{
    int v;
    list<pair<int,int>>* adj;
    public:
    Graph(int v);
    void addEdges(int u,int v,int w);
    void shortestPath(int s);
};
Graph::Graph(int v)
{
    this->v = v;
    adj = new list <Pair>[v];
}
void Graph::addEdges(int u,int v,int w)
{
    adj[u].push_back(make_pair(v,w));
    adj[v].push_back(make_pair(u,w));
}
void Graph::shortestPath(int src)
{
   priority_queue<Pair,vector<Pair>,greater<Pair> > pq; //min-heap.
   vector<int> dist(v,Inf);
   pq.push(make_pair(0,src));
   dist[src] = 0;
   while(!pq.empty())
   {
    int u = pq.top().second;
    pq.pop();
    list<pair<int, int> >::iterator i;
    for(i=adj[u].begin();i!=adj[u].end();++i)
    {
        int v = (*i).first;
        int weight = (*i).second;
        if(dist[v] > dist[u]+weight)
        {
            dist[v] = dist[u] + weight;
            pq.push(make_pair(dist[v],v));
        }
    }
   }
   cout << "Vertex distance from Source\n";
   for(int i=0;i<v;++i)
      cout << i << "\t\t" << dist[i] << "\n";
}
int main()
{
    int v= 6;
    Graph g(v);
    g.addEdges(0,1,4);
    g.addEdges(0,2,4);
    g.addEdges(1,0,4);
    g.addEdges(1,2,2);
    g.addEdges(2,0,4);
    g.addEdges(2,1,2);
    g.addEdges(2,3,3);
    g.addEdges(2,4,1);
    g.addEdges(2,5,6);
    g.addEdges(3,2,3);
    g.addEdges(3,5,2);
    g.addEdges(4,2,1);
    g.addEdges(4,5,3);
    g.addEdges(5,2,6);
    g.addEdges(5,3,2);
    g.addEdges(5,4,3);
    g.shortestPath(0);
    return 0;
}