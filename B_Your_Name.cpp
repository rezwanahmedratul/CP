#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string a,b;
    cin >> a >> b;
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    if(a==b) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
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