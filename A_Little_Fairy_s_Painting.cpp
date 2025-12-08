#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++){ 
            cin >> a[i];
        }
        
        set<int> s;
        for (int i = 0; i < n; i++) {
            s.insert(a[i]);
        }

        int d = s.size();
        int ans = -1;
        for (int x : s) {
            if (x >= d) {
                ans = x;
                break;
            }
        }
        
        cout << ans << '\n';
    }
    return 0;
}