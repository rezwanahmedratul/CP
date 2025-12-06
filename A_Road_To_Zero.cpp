#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
    cin >> t;
    while(t--){
        int x,y,a,b;
        cin >> x >> y >> a >> b;
        if (x == 0 and y == 0) {
            cout << 0 << endl;
        } else {
            if(2*a < b){
                cout << (x + y) * a << endl;
            } else{
                int n = min(x,y);
                int money = n * b;
                x -= n;
                y -= n;
                money += (x + y) * a;
                cout << money << endl;
            }
        }
    }
	return 0;
}