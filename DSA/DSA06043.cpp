//https://code.ptit.edu.vn/student/question/DSA06043
//ĐIỂM CÂN BẰNG

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int t;
    cin >> t;
    while (t--){
        ll n, sum = 0, tmp = 0, pos = -1;
        cin >> n;
        vector<int> a(n);
        for(auto &x : a){
            cin >> x;
            sum += x;
        }
        for(int i = 0; i < n; i++){
            tmp += a[i];
            if(sum - tmp == tmp - a[i]){
                pos = i + 1;
                break;
            }
        }
        cout << pos << endl;
    }
    return 0;
} 