#include<iostream>
#include<vector>
#include<queue>
using namespace std;
void bfs(int s,vector<vector<int>>&g,vector<bool>&vis,int n)
{
    queue <int> q;
    q.push(s);
    vis[s] = true;
    while(!(q.empty()))
    {
      int curr = q.front();
      cout<<curr<<" ";
      q.pop();
      for(int i=0;i<g[curr].size();i++)
      {
          if(vis[g[curr][i]]==false)
          {
              q.push(g[curr][i]);
              vis[g[curr][i]] = true;
          }
      }
    }
}
int main()
{
    int n,e;
    cout << "Enter number of vertices and edges\n";
    cin>>n>>e;
    vector<vector<int>> g(n);
    vector<bool> vis(n,false);
    for(int i=0;i<e;i++)
    {
        int u,v;
        cin>>u>>v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    bfs(0,g,vis,n);
}