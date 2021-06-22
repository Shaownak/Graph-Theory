/// Depth First Search (DFS)

/// Global scope variables
const int nodes = 100;
vector<int> adj_list[nodes];
bool visited[nodes];

void dfs(int at){
    if(visited[at]) return;
    visited[at] = true;

    for(auto next: adj_list[at]){
        dfs(next);
    }
}
