#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n,k;
    cin >> n >> k;
    string s;
    cin >> s;
    vector<int> a;
    for (int i = 0; i < n; ++i) {
        if (s[i] == '1') {
            a.push_back(i);
        }
    }
    if (a.size() == 0) {
        cout << "0\n";
    } else {
        int count = 0;
        for(int i = 0; i < a.size()-1; ++i) {
            if(a[i+1] - a[i] > k-1) {
                count++;
            }
        }    
        cout << count + 1 << "\n";
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