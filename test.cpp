#include <iostream>
#include <vector>
#include <stack>

using namespace std;

void dfs(vector<vector<int>>& graph, int start) {
    int n = graph.size();
    vector<bool> visited(n, false);
    stack<int> stk;
    
    stk.push(start);
    
    while (!stk.empty()) {
        int u = stk.top();
        stk.pop();
        
        if (!visited[u]) {
            cout << u << " ";
            visited[u] = true;
        }
        
        for (int v : graph[u]) {
            if (!visited[v]) {
                stk.push(v);
            }
        }
    }
}

int main() {
    int n, e; // Number of nodes and edges
    cout << "Enter the number of nodes: ";
    cin >> n;
    cout << "Enter the number of edges: ";
    cin >> e;
    
    vector<vector<int>> graph(n);
    
    cout << "Enter the edges (node pairs):\n";
    for (int i = 0; i < e; ++i) {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        
        graph[v].push_back(u);
    }
    
    int startNode;
    cout << "Enter the starting node for DFS: ";
    cin >> startNode;
    
    cout << "DFS traversal starting from node " << startNode << ": ";
    dfs(graph, startNode);
    cout << endl;
    
    return 0;
}
