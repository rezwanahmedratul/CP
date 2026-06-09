#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef long long ll;
//typedef int int128_t;
typedef vector<ll> vl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef vector<pll> vpl;
typedef map<int,int> mii;

#define fastInput() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define el "\n"
#define pb push_back
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define allr(a) a.rbegin(), a.rend()
#define all(a) a.begin(), a.end()
#define vin(v) for(auto &u : v) cin >> u
#define vout(v) for(auto u : v) cout << u << " "
#define F first
#define S second
#define sp ' '
#define mem(a,b) memset(a,b,sizeof(a))
#define gcd(a,b) __gcd(a,b)
int const MOD = 1e9 + 7;

void solve(){
    int n;
    cin >> n;
    if(n%2==0){
        for(int i=1; i<n; i+=2){
            int a = i, b = i+1;
            cout << a << sp << b << sp << a << sp << a << sp << b << sp << b << sp << a << sp << b << sp;
        }
        cout << el;
    } else if(n%3==0){
        for(int i=1; i<n; i+=3){
            int a = i, b = i+1, c = i+2;
            cout << a<<sp<<a<<sp<<b<<sp<<a<<sp<<b<<sp<<c<<sp<<a<<sp<<c<<sp<<b<<sp<<b<<sp<<c<<sp<<c<<sp;
        }
        cout << el;
    } else{
            int a = 1, b = 2, c = 3;
            cout << a<<sp<<a<<sp<<b<<sp<<a<<sp<<b<<sp<<c<<sp<<a<<sp<<c<<sp<<b<<sp<<b<<sp<<c<<sp<<c<<sp;

        for(int i=4; i<n; i+=2){
            int a = i, b = i+1;
            cout << a << sp << b << sp << a << sp << a << sp << b << sp << b << sp << a << sp << b << sp;
        }
        cout << el;
    }
}

int main(){
    fastInput();
    
    ll t = 1;
    cin >> t;
    while(t--){
        solve();
    }
    
    return 0;
}