#include<bits/stdc++.h>
using namespace std;

bool isCycle(vector<string> &grid, int i, int j, int pi, int pj, vector<vector<int>> &visited){

    visited[i][j] = true;
    int n = grid.size();
    int m = grid[0].size();

    int r[4] = {-1, 1, 0, 0};
    int c[4] = {0, 0, 1, -1};

    for(int k = 0; k<=3; k++){

        if((i+r[k]<n && i+r[k]>=0 && j+c[k]<m && j+c[k]>=0) && visited[i+r[k]][j+c[k]] && !(i+r[k]==pi && j+c[k]==pj) && grid[i][j] == grid[i+r[k]][j+c[k]]) return true;

        if((i+r[k]<n && i+r[k]>=0 && j+c[k]<m && j+c[k]>=0) && !visited[i+r[k]][j+c[k]] && grid[i][j] == grid[i+r[k]][j+c[k]] && isCycle(grid, i+r[k], j+c[k], i, j, visited)) return true;
    }

    return false;
}

int main(){

    int n,m;
    cin>>n>>m;

    vector<string> v(n);

    for(int i = 0; i<n; i++)
    cin>>v[i];

    vector<vector<int>> visited(n, vector<int>(m, 0));

    bool found = false;

    for(int i = 0; i<n; i++)
    for(int j = 0; j<m; j++){

        if(!visited[i][j] && isCycle(v, i, j, -1, -1, visited))
        found = true;
    }
    cout<< (found ? "Yes" : "No");
}