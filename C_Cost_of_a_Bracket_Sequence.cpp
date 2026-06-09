#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef long long ll;
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
    int n,k;
    cin >> n >> k;
    string s;
    vector<int> a(n);
    cin >> s;
    for(int i=0; i<n; i++){
        if(s[i]==40) a[i] = 0;
        else a[i] = 1;
    }
    vector<int> ans(n,0);
    vector<int> unnatural;
    vector<pair<int,int>> pairs;
    int maxv = 0;

    stack<int> zero;
    for(int i=0; i<n; i++){
        if(a[i]==0){
            zero.push(i);
            maxv++;
        } else{
            if(zero.empty()){
                unnatural.push_back(i);
            } else{
                pairs.push_back({zero.top(), i});
                zero.pop();
            }
        }
    }
    
  if(maxv>=(double)n/2){
    for(auto i : ans){
        cout << i;
    }
    cout << el;
  } else{
     while(k--){
    if(!unnatural.empty()){
        ans[unnatural.front()] = 1;
        unnatural.erase(unnatural.begin());
    }else if(!pairs.empty()){
        if(pairs.front().first != -1){
            ans[pairs.front().first] = 1;
            pairs.front().first = -1;
        } else{
            ans[pairs.front().second] = 1;
            pairs.erase(pairs.begin());
        }
    }
   }
   for(auto u : ans) cout << u;
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