#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;
    int ans = 0, l = s.length();
    for(int i =0; i < l; i++) {
        if(s[i]=='\\'){
            if(i+1 <l){
                if(s[i+1]=='0'){
                    cout << ans << endl;
                    return;
                } else{
                    ans++;
                    i++;
                }
            } else {
                cout << "INVALID" << endl;
                return;
            }
        } else {
            ans++;  
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