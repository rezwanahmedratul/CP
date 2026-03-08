#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        //bool one = false;
        bool sixtsvn = false;
        
        for(int i = 0; i < n; i++){
            cin >> a[i];
            if(a[i] == 67){
                sixtsvn = true;
            }
        }    
        if(sixtsvn){
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}