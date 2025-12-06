#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int y,r;
        cin >> y >> r;

        int yy=y/2;
        yy+=r;
        int ans = min(yy,n);
        cout << ans << "\n";
    }

    return 0;
}