#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        if(abs(a-b) == 0){
            cout << 0 << endl;
        } else if (abs(a-b) >= 1 and abs(a-b) <= 10){
            cout << 1 << endl;
        } else {
            long long x = ceil((abs(a-b))/10.0);
            cout << x << endl;
        }
    }
	return 0;
}