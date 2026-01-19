#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    //for(int i = 0; i< n; i++){
   //     cout << a[i] << " ";
   // }
    // int tmp =  min(a[0],a[1]-a[0]);
    int tmp =  max(a[0],a[1]-a[0]);
    cout << tmp << endl;
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