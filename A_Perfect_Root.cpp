#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;

#define all(x) x.begin(), x.end()
#define debug(x) cerr << #x << " = " << x << endl;

const int MOD = 1e9+7;
const int INF = 1e9;

void solve() {
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        cout << i << ' ';
    }
    cout << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}