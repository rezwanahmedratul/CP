#include <bits/stdc++.h>
using namespace std;

int mtn(string month) {
    if (month == "January") return 1;
    if (month == "February") return 2;
    if (month == "March") return 3;
    if (month == "April") return 4;
    if (month == "May") return 5;
    if (month == "June") return 6;
    if (month == "July") return 7;
    if (month == "August") return 8;
    if (month == "September") return 9;
    if (month == "October") return 10;
    if (month == "November") return 11;
    if (month == "December") return 12;
}

string ntm(int num) {
    switch(num) {
        case 1: return "January";
        case 2: return "February";
        case 3: return "March";
        case 4: return "April";
        case 5: return "May";
        case 6: return "June";
        case 7: return "July";
        case 8: return "August";
        case 9: return "September";
        case 10: return "October";
        case 11: return "November";
        case 12: return "December";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string month;
    int k;
    cin >> month >> k;

    int num = mtn(month);
    num = (num + k) % 12;
    if (num == 0) num = 12;
    cout << ntm(num) << "\n";
    return 0;
}