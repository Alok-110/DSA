#include<bits/stdc++.h>
using namespace std;

void dfs(vector<vector<int>> &adj, int node, vector<int> &visited){

    visited[node] = 1;

    for(auto &it: adj[node]){

        if(!visited[it])
        dfs(adj, it, visited);
    }
}

int main(){

    int n,m,s,u,v;
    cin>>n>>m>>s;

    vector<vector<int>> adj(n);
    vector<int> vis(n, 0);
    while(m--){

        cin>>u>>v;
        adj[u].push_back(v);
    }

    dfs(adj, s, vis);

    vector<int> unVisited;
    for(int i = 0; i<n; i++)
    if(!vis[i])
    unVisited.push_back(i);

    int k = unVisited.size();

    vector<int> tempVis(k,0);
    map<int,int> mp;

    for(int i = 0; i<k; i++){
        dfs(adj, unVisited[i], tempVis);

        for(int i = 0; i<k; i++)
        if(tempVis[i]) mp[unVisited[i]]++;

        tempVis.assign(k, 0);
    }


    
}