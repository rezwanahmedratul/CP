#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define vin(v) for(auto &u : v) cin >> u
#define vout(v) for(ll i = 0; i < (ll)v.size(); i++) cout << v[i] << (i + 1 == (ll)v.size() ? '\n' : ' ')
#define sp ' '

void solve(){
    ll n;
    cin >> n;
    vector<int> a(n);
    vin(a);
    ll ans = 0;
    int tmp=INT_MAX;
    for(int i=0; i<n; i++){
        tmp=min(a[i],tmp);
        ans+=min(a[i],tmp);
    }
    cout << ans << endl;
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