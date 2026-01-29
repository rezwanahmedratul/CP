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
    ll sum = 0;
    if(n%2==0){
        sum = (ll)(n+2)*(n/2);
    } else {
        sum = (ll)(n/2)*(n/2 + 1);
    }


    cout << sum << "\n";

    return 0;
}