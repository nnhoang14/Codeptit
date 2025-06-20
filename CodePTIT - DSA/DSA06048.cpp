//https://code.ptit.edu.vn/student/question/DSA06048
//SỐ LẦN QUAY VÒNG

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int t;
    cin >> t;
    while (t--){
        ll n, cnt = 0, pos = -1, num = 1e18;
        cin >> n;
        vector<ll> a(n);
        for(int i = 0; i < n; i++){ 
            cin >> a[i];
            if(a[i] < num){
                num = a[i];
                pos = i;
            }
        }
        cout << pos << endl; 
    }
    return 0;
}