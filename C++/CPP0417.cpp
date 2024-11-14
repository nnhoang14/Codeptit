//https://code.ptit.edu.vn/student/question/CPP0417
//SẮP XẾP LẠI DÃY CON

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int test;
    cin >> test;
    while (test--){
        int n, ps=-1, pe=-1;
        cin >> n;
        vector<int> a(n);
        vector<int> tmp;
        for(auto &x : a){
            cin >> x;
            tmp.push_back(x);
            }
        sort(tmp.begin(),tmp.end());
        for(int i = 0; i < n; i++){
            if(a[i] != tmp[i] && ps == -1) ps = i + 1;
            else if(a[i] != tmp[i] && ps > -1) pe = i + 1;
        }
        cout << ps << " " << pe << endl;
    }

    return 0;
}