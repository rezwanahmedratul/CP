#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {   
        cin >> a[i];
    }    

    long long int sum = 0;
    for (int i = 0; i < n - 1; ++i) {
        sum += abs(a[i] - a[i + 1]);
    }

    long long int ans = sum;
    for (int i = 0; i < n; i++) {
        if (i == 0) {
            ans = min(ans, sum - abs(a[0] - a[1]));
        } else if (i == n - 1) {
            ans = min(ans, sum - abs(a[n - 2] - a[n - 1]));
        } else {
            long long int nsum = sum - abs(a[i - 1] - a[i]) - abs(a[i] - a[i + 1]) + abs(a[i - 1] - a[i + 1]);
            ans = min(ans, nsum);
        }
    }

    cout << ans << endl;
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




