#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n,k;
    cin >> n >> k;
    if(k>=n){
        cout << (k/n)+(k%n==0?0:1) << "\n";
    } else {
        while(k<n) {
            k+=k;
        }
        cout << (k/n)+(k%n==0?0:1) << "\n";
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