#include<bits/stdc++.h>
using namespace std;

bool dfs(vector<vector<int>> &adj, int node, vector<int> &visited){

    visited[node] = 1;
    bool indeg2 = true;
    if(adj[node].size() !=2) indeg2 = false;

    for(int nei : adj[node]){
        if(!visited[nei]){
            if(!dfs(adj, nei, visited)) indeg2 =  false;
        }
    }
    return indeg2;
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

    vector<int> visited(n+1, 0);
    int count = 0;

    for(int i = 1; i<=n ; i++){

       if(!visited[i] && dfs(adj, i, visited)) count++;
    }
    cout<<count;
}