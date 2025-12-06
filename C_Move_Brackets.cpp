#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; ++i) {
        char c;
        cin >> c;
        a[i] = (c == '(') ? 1 : -1;
    }
    int sum = 0;
    int ans = 0;
    for(int i = 0; i < n; ++i) {
        sum += a[i];
        if(sum < 0) {
            ans++;
            sum = 0;
        }
    }    
    cout << ans << "\n";
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