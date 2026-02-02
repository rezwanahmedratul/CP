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
    if (n > 2){
        vector<int> arr(n+1);
        arr[n] = 1;

        map<int, bool> used;
        used[1] = true;

        for (int i = n-1; i > 0; i--){
            if((arr[i+1]+i)<=n and !used[arr[i+1]+i]){
                arr[i] = arr[i+1]+i;
                used[arr[i]] = true;
            } else {
                arr[i] = abs(arr[i+1]-i);
                used[arr[i]] = true;
            }
        }


        for (int i = 1; i < n+1; i++){
            cout << arr[i] << ' ';
        }
        cout << '\n';



    }else{
        cout << 1 << ' ' << 2 << '\n';
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