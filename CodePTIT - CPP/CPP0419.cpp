//https://code.ptit.edu.vn/student/question/CPP0419
//HỢP VÀ GIAO CỦA HAI DÃY SỐ - 2

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int test;
    cin >> test;
    while (test--){
        int n,m;
        cin >> n >> m;
        int a[n],b[m];
        map<int, int> u;
        for(int &x : a){
           cin >> x; 
           u[x]++;
        }
        for(int &x : b){
           cin >> x; 
           u[x]++;
        }
        for(auto &pair : u)cout << pair.first << " ";
        cout << endl;
        for(auto &pair : u){
            if(pair.second > 1) cout << pair.first << " ";
        }
        cout << endl;
    }
    return 0;
}