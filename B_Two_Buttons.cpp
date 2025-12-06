#include<bits/stdc++.h>
using namespace std;

int main(){
	int a,b;
    cin >> a >> b;
    if (a == b){
        cout << 0 << endl;
    } else if (a > b){
        cout << a-b << endl;
    } else {
        int c=0;
        while(a!=b){
            if(b%2 == 0 and b >= a){
                b = b/2;
                c++;
            } else {
                b++;
                c++;
            }
        }
        cout << c << endl;
    }   
	return 0;
}    



       /* int n = ceil(log2(b/(float)a));
        int front = abs(a*pow(2,n)-b);
        cout << n + front << endl;*/