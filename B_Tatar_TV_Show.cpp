#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define vin(v) for(auto &u : v) cin >> u
#define vout(v) for(ll i = 0; i < (ll)v.size(); i++) cout << v[i] << (i + 1 == (ll)v.size() ? '\n' : ' ')
#define sp ' '

void solve(){
    int n,k;
    cin >> n >> k;
    string a;
    cin >> a;
    bool flag = true;
    if(k>=n){
        flag = false;
    } else{
        for(int i=0; i<=n-k; i++){
            if(i+k>n-1){
                //cout << "hi" << endl;
                flag = false;
                break;
            }
            for(int j=i+k; j<n; j+=k){
                //cout << a[i] << sp << a[j] << sp << j << endl;
                if(a[i] == a[j]){
                    a[i]='0';
                    a[j]='0';
                }else{
                    flag = false;
                    break;
                }
            }
        }
    }
    if(flag) YES;
    else NO;
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