#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;
    int n = s.size();
    int zero = count(s.begin(), s.end(), '0');
    int one = n - zero;
    
    if(n == 0) {
        cout << 0 << endl;
    } else if(n == 1){
        cout << 1 << endl;
    } else if(zero == n or one == n){
        cout << n << endl;
    } else {
        string a;
        int cost = 0;
        
        for(int i = 0, j = 0; i < n; i++){
            if(s[i] == '0'){
                if(one > 0){
                    if(s[i] == s[j]){
                        j++;
                        one--;
                    } else {
                        one--;
                    }
                } else {

                }
            } else {
                if(zero > 0){
                    if()
                } else {
                    cost++;
                }
            }
        }   
        
        cout << cost << endl; 
        //cout << "String : " << a << endl;
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