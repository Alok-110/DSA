// union find by rank and path compression

vector<int> rank;
vector<int> parent;


int find(int x){

    if(parent[x] == x) return x;

    return parent[x] = find(parent[x]);
}

void Union(int x, int y){

    int x_parent = find(x);
    int y_parent = find(y);

    if(x_parent == y_parent) return;

    if(rank[x_parent] > rank[y_parent])
    rank[y_parent] = x_parent;

    else if(rank[y_parent] > rank[x_parent])
    rank[x_parent] = rank[y_parent];

    else{
        parent[x_parent] = y_parent;
        rank[y_parent]++;
    }
}