#include <bits/stdc++.h>
using namespace std;

void bfs(int start, vector<vector<int>> &adj, vector<int> &dist, int n) {
  fill(dist.begin(), dist.end(), -1);
  queue<int> q;
  q.push(start);
  dist[start] = 0;
  while (!q.empty()) {
    int u = q.front();
    q.pop();
    for (int v : adj[u]) {
      if (dist[v] == -1) {
        dist[v] = dist[u] + 1;
        q.push(v);
      }
    }
  }
}
int find_diameter(int n, vector<vector<int>> &adj) {
  vector<int> dist(n + 1);
  bfs(1, adj, dist, n); // BFS from vertex 1
  int max_dist = 0, farthest = 1;
  for (int i = 1; i <= n; i++) {
    if (dist[i] > max_dist) {
      max_dist = dist[i];
      farthest = i;
    }
  }
  bfs(farthest, adj, dist, n); // BFS from farthest vertex
  return *max_element(dist.begin(), dist.end());
}
void solve() {
  int n;
  cin >> n;
  vector<vector<int>> adj(n + 1);
  for (int i = 0; i < n - 1; i++) {
    int u, v;
    cin >> u >> v;
    adj[u].push_back(v);
    adj[v].push_back(u);
  }
  int diameter = find_diameter(n, adj);
  if (diameter <= 2) {
    cout << 0 << "\n";
  } else {
    cout << (diameter - 2 + 1) / 2 << "\n"; // Ceiling of (diameter - 2) / 2
  }
}
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}
