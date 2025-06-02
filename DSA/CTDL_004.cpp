//https://code.ptit.edu.vn/student/question/CTDL_004
//DÃY CON TĂNG DẦN BẬC K

#include <bits/stdc++.h>
using namespace std;

bool check(vector<int> a, vector<int> tmp){
    for(int i = 0; i < tmp.size() - 1; i++)
        if(a[tmp[i]] >= a[tmp[i + 1]]) return false;
    return true;
}

int main(){
    int n, k;
    cin >> n >> k;
    vector<int> a(n), tmp(k);
    for(auto &x : a) cin >> x;
    for(int i = 0; i < k; i++) 
        tmp[i] = i;
    int cnt = 0;
    while (true){
        if(check(a, tmp))cnt ++;
        int i = k - 1;
        while (i >= 0 && tmp[i] == n - k + i){
            i--;
        }
        if(i < 0) break;
        tmp[i]++;
        for(int j = i + 1; j < k; j++)
            tmp[j] = tmp[j - 1] + 1;
    }
    cout << cnt;
    return 0;
}