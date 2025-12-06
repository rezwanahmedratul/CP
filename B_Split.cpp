#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (cin >> t) {
        while (t--) {
            int n;
            cin >> n;
            
            vector<int> arr(2 * n + 1, 0);
            
            for (int i = 0; i < 2 * n; ++i) {
                int x;
                cin >> x;
                arr[x]++;
            }
            
            int odd = 0, even = 0;
            
            for (int c : arr) {
                if (c == 0) continue;
                if (c % 2 != 0) {
                    odd++;
                } else {
                    even++;
                }
            }
            
            int ans = odd + 2 * even;
            
            if (odd == 0) {
                if (even % 2 != n % 2) {
                    ans -= 2;
                }
            }
            
            cout << ans << "\n";
        }
    }
    return 0;
}
