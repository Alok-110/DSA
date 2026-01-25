#include<bits/stdc++.h>
using namespace std;

bool isCycle(vector<vector<int>> &adj, int node, vector<int> &vis, int parent){

    vis[node] = 1;

    for(auto &it:adj[node]){

        if(it == parent) continue;

        if(vis[it]) return true;

        if (isCycle(adj, it, vis, node))
        return true;
    }
    return false;
}

int main(){

    int n,m,u,v;
    cin>>n>>m;
    vector<vector<int>> adj(n+1);

    while(m--){

        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<int> vis(n+1, 0);
    int count = 0;
    for(int i = 1; i<=n; i++){

        if(!vis[i] && isCycle(adj, i, vis, -1)){

            count++;
        }
    }
    return count;
}