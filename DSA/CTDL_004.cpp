//https://code.ptit.edu.vn/student/question/CTDL_004
//DÃY CON TĂNG DẦN BẬC K

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k, cnt = 0;
    cin >> n >> k;
    vector<int> a(n), tmp(k);
    for(auto &x : a) cin >> x;
    for(int i = 0; i < k; i++)
        tmp[i] = a[i];
    while (true){
        cnt++;
        int i = k - 1;
        while (i >= 0 && tmp[i] == a[k + i - 1]){
            i--;
        }
        if(i < 0) break;
        tmp[i] = a[i + 1];
        for(int j = i + 1; j < k; j++)
            tmp[j] = a[j - 1];
    }
    cout << cnt;
    return 0;
}
//2 5 15
//2 5 10
//2 5 20
//2 15 20
//2 10 20
//5 15 20
//5 10 20