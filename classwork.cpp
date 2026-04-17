#include <bits/stdc++.h>
using namespace std;

void printarray(int ar[]){
    int n = sizeof(ar) / sizeof(ar[0]);
    for(int i = 0; i < n; i++){
        cout << ar[i] << " ";
    }
    cout << endl;
}

void insrt(int *ar, int pos, int val){
    int n = sizeof(ar) / sizeof(ar[0]);
    for(int i = pos; i < n - 1; i++){
        ar[i] = ar[i + 1];
    }
    ar[pos] = val;
}

void del(int *ar, int pos){
    int n = sizeof(ar) / sizeof(ar[0]);
    for(int i = pos; i < n - 1; i++){
        ar[i] = ar[i + 1];
    }
}

void merge(int *ar1, int *ar2){
    int n1 = sizeof(ar1) / sizeof(ar1[0]);
    int n2 = sizeof(ar2) / sizeof(ar2[0]);
    int *ar3 = new int[n1 + n2];
    for(int i = 0; i < n1; i++){
        ar3[i] = ar1[i];
    }
    for(int i = 0; i < n2; i++){
        ar3[n1 + i] = ar2[i];
    }
}

int main(){
    int ar1[] = {1, 2, 3, 4, 5};
    int ar2[] = {6, 7, 8, 9, 10};
    
    printarray(ar1);
    printarray(ar2);
    
    insrt(ar1, 1, 33);
    printarray(ar1);

    del(ar2, 2);
    printarray(ar2);
    
    merge(ar1, ar2);
    printarray(ar1);
    
    return 0;
}