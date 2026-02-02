#include <bits/stdc++.h>
using namespace std;

int partition(vector<int>& arr, int st, int end){
    int pvt = arr[end], i=st-1;
    for(int j=st; j<end; j++){
        if(arr[j]<pvt){
            i++;
            swap(arr[j],arr[i]);
        }
    }

    i++;
    swap(arr[i],arr[end]);
    return i;
}

void QSORT(vector <int>& arr, int st, int end){
    if(st < end){
        int pvt = partition(arr, st, end);
        QSORT(arr, st, pvt - 1);
        QSORT(arr, pvt + 1, end);
    }

}

void mrg(vector<int>& arr, int st, int mid, int end){
    vector <int> tmp;
    int i = st, j = mid +1;
    while(i<=mid and j<= end){
        if(arr[i]<=arr[j]){
            tmp.push_back(arr[i]);
            i++;
        } else{
            tmp.push_back(arr[j]);
            j++;
        }
    }

    while(i<=mid){
        tmp.push_back(arr[i]);
        i++;
    }

    while(j<=end){
        tmp.push_back(arr[j]);
        j++;
    }

    for(int k=0; k<tmp.size();k++){
        arr[st+k]= tmp[k];
    }
}

void MSORT(vector <int>& arr, int st, int end){
    if(st<end){
        int mid = st + (end - st)/2;
        MSORT(arr, st, mid);
        MSORT(arr, mid+1, end);
        mrg(arr, st, mid, end);
    }
}

int main() {

    vector<int> arr = {170, 45, 75, 90, 802, 24, 2, 66};
    //QSORT(arr, 0, arr.size()-1);
    MSORT(arr, 0, arr.size()-1);

    for(auto x : arr){
        cout << x << ' ';
    }
    cout << endl;

    return 0;
}