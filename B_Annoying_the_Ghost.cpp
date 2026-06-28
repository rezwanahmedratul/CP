#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define vin(v) for(auto &u : v) cin >> u
#define vout(v) for(ll i = 0; i < (ll)v.size(); i++) cout << v[i] << (i + 1 == (ll)v.size() ? '\n' : ' ')
#define sp ' '

int bubbleSort(vector<int> arr, vector<int> b) {
    int n = arr.size();
    int cnt = 0;

    for (int i = 0; i < n - 1; i++) {
        bool swapped = false;

        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1] and (arr[j]>b[j])) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
                cnt ++;
            }
        }

        if (!swapped) break;
    }
    return cnt;
}

void solve(){
    ll n;
    cin >> n;
    vector <int> a(n);
    vector <int> b(n);
    vin(a);
    vin(b);
    int mm;
    int tmp = INT_MIN;
    for(int i=0; i<n; i++){
        tmp = max(tmp,a[i]);
        mm = tmp;
    } 
    if(mm>b[n-1]){
        cout << -1 << endl;
    } else{
        cout << bubbleSort(a,b) << endl;
    }
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