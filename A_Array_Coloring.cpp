#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;

#define all(x) x.begin(), x.end()
#define debug(x) cerr << #x << " = " << x << endl;

const int MOD = 1e9+7;
const int INF = 1e9;

void solve() {
    int n;
    cin >> n;
    vector<pair<int, int>> arr(n);

    for(int i = 0; i < n; i++) {
        cin >> arr[i].first;
        arr[i].second = i;
    }

    sort(all(arr));

    bool no=false;
    for(int i = 0; i < n-1; i++) {
        if(arr[i].second % 2 == arr[i+1].second % 2) {
            no = true;
            break;
        }
    }
    
    if(no) {
        cout << "NO\n";
    } else {
        cout << "YES\n";
    }    

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}