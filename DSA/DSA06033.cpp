//https://code.ptit.edu.vn/student/question/DSA06033
//KHOẢNG CÁCH XA NHẤT

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int check(vector<pair<int,int>> &a, int n){
    int l = 0, r = n - 1;
    while (l < r){
        if(a[l] >= a[r]){
            if(a[l + 1].first < a[r].first) return a[r].second - a[l + 1].second;
            if(a[l].first < a[r - 1].first) return a[r - 1].second - a[l].second;
            r--;
            l--;
        }
        else return  a[r].second - a[l].second;
    }
    return -1;
}

int main(){
    int t;
    cin >> t;
    while (t--){
        ll n;
        cin >> n;
        vector<pair<int,int>> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i].first;
            a[i].second = i;
        }
        cout << check(a,n) << endl;  
    }
    return 0;
} 