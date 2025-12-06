#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string s;
    cin >> s;
    string a,b,c;
    
    for(int i = 0, cnt = 0; i < s.size(); i++) {
        if(s[i] == '=' or s[i] == '+'){
            cnt++;
        } else {
            if(cnt == 0) a += s[i];
            else if(cnt == 1) b += s[i];
            else c += s[i];
        }
    }

    string comma = "'";

    string d,e;
    bool dd = false, ee = false;

    if((b[0]>= '0' and b[0] <= '9') == false) {
        d = b;
    } else {
        dd = true;
        for(int i = b.size()-1, cnt = 3; i >= 0; i--) {
            if(b[i]>= '0' and b[i] <= '9') {
                if(cnt == 0) {
                    d+= comma + b[i];
                    cnt = 2;
                } else {
                    d += b[i];
                    if(cnt > 0) cnt--;
                }
            } else {
                d += b[i];
                cnt = 3;
            }
        }
    }    


    if((c[0]>= '0' and c[0] <= '9') == false) {
        e = c;
    } else {
        ee = true;
        for(int i = c.size()-1, cnt = 3; i >= 0; i--) {
            if(c[i]>= '0' and c[i] <= '9') {
                if(cnt == 0) {
                    e+= comma + c[i];
                    cnt = 2;
                } else {
                    e += c[i];
                    if(cnt > 0) cnt--;
                }
            } else {
                e += c[i];
                cnt = 3;
            }
        }
    }


    if(dd) reverse(d.begin(), d.end());
    if(ee) reverse(e.begin(), e.end());
    cout << a << "=" << d << "+" << e << "\n";

    return 0;
}