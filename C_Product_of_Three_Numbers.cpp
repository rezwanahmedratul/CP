#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a;
    for(int i = 2; i * i <= n and a.size()<2; ++i) {
        if(n % i == 0) {
            a.push_back(i);
            n /= i;
        }
    }
    if(a.size() < 2 or n == 1 or n == a[0] or n == a[1]) {
        cout << "NO" << endl;
    }else {
        cout << "YES" << endl;
        cout << a[0] << " " << a[1] << " " << n << endl;
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