#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define vin(v) for(auto &u : v) cin >> u
#define vout(v) for(ll i = 0; i < (ll)v.size(); i++) cout << v[i] << (i + 1 == (ll)v.size() ? '\n' : ' ')
#define sp ' '

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    vin(a);
    sort(a.rbegin(),a.rend());
    cout << a[0]+1-a[n-1] << endl;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    ll t = 1;
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}