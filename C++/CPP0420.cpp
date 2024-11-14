//https://code.ptit.edu.vn/student/question/CPP0420
//SẮP XẾP THEO KHOẢNG CÁCH

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int x;
bool cmp(int a, int b){
    return abs(x - a) < abs(x - b);
}

int main(){
    int test;
    cin >> test;
    while (test--){
        int n;
        cin >> n >> x;
        int a[n];
        for(int &x: a)cin >> x;
        stable_sort(a,a+n,cmp);
        for(int x: a)cout << x << " ";
        cout << endl;
    }
    return 0;
}