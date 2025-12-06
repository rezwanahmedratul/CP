#include <bits/stdc++.h>
using namespace std;

void printArray(const vector<int>& arr) {
    for (int x : arr) {
        cout << x << " ";
    }
    cout << "\n";
}

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    bool even=false,odd=false;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        if(a[i]%2==0) {
            even=true;
        } else {
            odd=true;
        }
    }

    //bubbleSort(a);
    if(even && odd) {
        sort(a.begin(), a.end());
    }
    printArray(a);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}