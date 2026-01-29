#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;

#define all(x) x.begin(), x.end()
#define debug(x) cerr << #x << " = " << x << endl;

const int MOD = 1e9+7;
const int INF = 1e9;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    set<int> s;
    map<int, int> freq;
    ll sum=0;
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        s.insert(x);
        freq[x]++;
        sum += x;
    }

    for()
    
    

    return 0;
}