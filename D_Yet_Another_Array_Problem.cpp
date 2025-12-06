#include <bits/stdc++.h>
using namespace std;

bool isPrime(long long n) {
    if (n < 2) return false;
    if (n == 2 || n == 3) return true;
    if (n % 2 == 0) return false;
    for (long long i = 3; i * i <= n; i += 2) {
        if (n % i == 0) return false;
    }
    return true;
}

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(auto &x : a) {
        cin >> x;
    }
    sort(a.begin(), a.end());
    for(int i = 0; i < n; i++) {
        if(isPrime(a[i])){
            cout << a[i] << endl;
            return;
        } else {
            cout << -1 << endl;
            return;
        }    
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