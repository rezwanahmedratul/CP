#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    vector<int> a;
    int count = 0;
    for (int i = 0; i < n; ++i) {
        int tmp;
        cin >> tmp;
        if (tmp == 4){
            count ++;
            continue;
        }
        a.push_back(tmp);
    }
    

    return 0;
}