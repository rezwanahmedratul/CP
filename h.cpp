#include <iostream>
#include <queue>
#include <unordered_set>
#include <unordered_map>
#include <vector>
using namespace std;

typedef long long ll;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        unordered_set<ll> S;
        queue<ll> Q;
        for (int i = 0; i < n; i++) {
            ll c;
            cin >> c;
            S.insert(c);
            Q.push(c);
        }
        
        unordered_map<ll, vector<pair<ll, ll>>> graph;
        for (int i = 0; i < m; i++) {
            ll x, y, z;
            cin >> x >> y >> z;
            graph[x].push_back({y, z});
            graph[y].push_back({x, z});
        }
        
        while (!Q.empty()) {
            ll c = Q.front();
            Q.pop();
            if (graph.find(c) != graph.end()) {
                for (auto &edge : graph[c]) {
                    ll other = edge.first;
                    ll z = edge.second;
                    if (S.find(other) != S.end() && S.find(z) == S.end()) {
                        S.insert(z);
                        Q.push(z);
                    }
                }
            }
        }
        
        cout << S.size() << endl;
    }
    return 0;
}