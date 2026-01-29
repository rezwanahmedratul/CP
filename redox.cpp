#include <bits/stdc++.h>
using namespace std;

int get_digit(int n, int d){
    //int tmp = pow(10, d-1);
    int tmp = 1;
    for(int i = 1; i < d; i++) tmp *= 10;

    return (n/tmp)%10;
}

int get_max(vector <int> a){
    int l = a.size();
    int m = INT_MIN;
    for(int i=0; i<l; i++){
        if(m<a[i]){
            m=a[i];
        }
    }

    int ans = 0;
    while(m){
        m/=10;
        ans++;
    }

    return ans;
}

void t_cnt(vector<int>& a, int n, vector <int>& cnt){
    for(int i = 0; i<a.size();i++){
        int tmp = get_digit(a[i],n);
        cnt[tmp]++;
    }

    for(int i=1; i<10; i++){
        cnt[i]+=cnt[i-1];
    }
}

void red_sort(vector <int>& a){
    int m = get_max(a);

    for(int i=1; i<=m; i++){
        vector <int> cnt(10,0);
        t_cnt(a,i,cnt);

        vector<int> output(a.size());

        for(int j = a.size() - 1; j >= 0; j--){
            int d = get_digit(a[j], i);
            output[--cnt[d]] = a[j];
        }

        a = output;
    }

}


int main() {
    vector<int> main_array = {734, 125, 97, 57, 208, 699};

    red_sort(main_array);

    for(int i = 0; i<main_array.size();i++){
        cout << main_array[i] << ' ';
    }

    return 0;
}