//https://code.ptit.edu.vn/student/question/DSA06027
//SẮP XẾP ĐỔI CHỖ TRỰC TIẾP - LIỆT KÊ NGƯỢC

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        vector<int> a(n);
        vector<string> res;
        for(auto &x : a) cin >> x;
        for(int i = 0; i < n - 1; i++){
            string s = "";
            for(int j = i + 1; j < n; j++)
                if(a[i] > a[j]) swap(a[i], a[j]);
            s = "Buoc " + to_string(i + 1) + ": ";
            for(auto x : a) s += to_string(x) + " ";
            res.push_back(s);
        }
        for(int i = res.size() - 1; i >= 0; i--)
            cout << res[i] << endl;
        cout << endl;
    }
    
    return 0;
}