#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

const int MOD = 998244353;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> graph(n);
        for (int i = 0; i < n - 1; i++) {
            int u, v;
            cin >> u >> v;
            u--; v--;
            graph[u].push_back(v);
            graph[v].push_back(u);
        }

        vector<vector<int>> children(n);
        vector<int> parent(n, -1);
        queue<int> q;
        q.push(0);
        parent[0] = -1;
        while (!q.empty()) {
            int u = q.front(); q.pop();
            for (int v : graph[u]) {
                if (v == parent[u]) continue;
                parent[v] = u;
                children[u].push_back(v);
                q.push(v);
            }
        }

        vector<int> order;
        q.push(0);
        while (!q.empty()) {
            int u = q.front(); q.pop();
            order.push_back(u);
            for (int v : children[u]) {
                q.push(v);
            }
        }
        reverse(order.begin(), order.end());

        vector<int> subtree_mask(n, 0);
        for (int u : order) {
            subtree_mask[u] = (1 << u);
            for (int v : children[u]) {
                subtree_mask[u] |= subtree_mask[v];
            }
        }

        vector<vector<int>> H(n, vector<int>(1 << n, 0));
        
        for (int k : order) {
            vector<int> P(1 << n, 1);
            for (int c : children[k]) {
                for (int S = 0; S < (1 << n); S++) {
                    P[S] = (1LL * P[S] * H[c][S]) % MOD;
                }
            }
            for (int T = 0; T < (1 << n); T++) {
                for (int x = 0; x < n; x++) {
                    if (T & (1 << x)) {
                        int S = T & ~subtree_mask[x];
                        H[k][T] = (H[k][T] + P[S]) % MOD;
                    }
                }
            }
        }

        cout << H[0][(1 << n) - 1] << '\n';
    }
    return 0;
}