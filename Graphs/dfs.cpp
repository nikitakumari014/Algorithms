#include<iostream>
#include<vector>
using namespace std;
void dfs(int s,vector<vector<int>> &g,vector<bool>&vis)
{
    vis[s] = true;
    cout<<s<<" ";
    for(int i=0;i<g[s].size();i++)
    {
        if(vis[g[s][i]]==false)
        dfs(g[s][i],g,vis);
    }

}
int main()
{
    int n,e;
     cout << "Enter vertices and edges\n";
    cin >> n >>e;
    vector<vector<int>> g(n);
    vector<bool> vis(n,false);
    for(int i=0;i<e;i++)
    {
        int u,v;
        cin>>u>>v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    dfs(0,g,vis);
}