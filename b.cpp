#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, v, l, n;
        cin >> a >> v >> l >> n;
        if (n == 0) {
            cout << (v >= 2 ? "YES" : "NO") << endl;
        } else {
            cout << (v > n && a > n ? "YES" : "NO") << endl;
        }
    }
    return 0;
}