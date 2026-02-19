#include <iostream>
#include <vector>
#include <queue>

using namespace std;

void bfs(int start, vector<vector<int>>& adj, int n) {
    vector<bool> visited(n, false);
    queue<int> q;

    visited[start] = true;
    q.push(start);

    while (!q.empty()) {
        int node = q.front();
        q.pop();

        cout << node << " ";

        for (int neighbor : adj[node]) {
            if (!visited[neighbor]) {
                visited[neighbor] = true;
                q.push(neighbor);
            }
        }
    }
}

int main() {
    int n = 5; // number of vertices
    vector<vector<int>> adj(n);

    // Adding edges (Undirected Graph)
    adj[0].push_back(1);
    adj[0].push_back(2);
    adj[1].push_back(3);
    adj[1].push_back(4);

    adj[1].push_back(0);
    adj[2].push_back(0);
    adj[3].push_back(1);
    adj[4].push_back(1);

    cout << "BFS Traversal starting from node 0:\n";
    bfs(0, adj, n);

    return 0;
}
