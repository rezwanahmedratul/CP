#include <bits/stdc++.h>
using namespace std;

void solve() {
    string a,b,c;
    cin >> a >> b;

    map<char, int> countA, countB;
    for (char ch : a) countA[ch]++;
    for (char ch : b) countB[ch]++;

    for (char ch = 'a'; ch <= 'z'; ch++) {
        if(countA[ch] > countB[ch]) {
            cout << "Impossible\n";
            return;
        }
    }    
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