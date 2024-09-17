//https://code.ptit.edu.vn/student/question/CPP0503
//CẤU TRÚC PHÂN SỐ

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

typedef struct PhanSo{
    ll mau,tu;
} PS;

ll gcd(ll a, ll b){
    while(b!=0){
        ll r = a % b;
        a = b;
        b = r;
    }
    return a;
}

void nhap(PS &p){
    cin >> p.tu >> p.mau;
}

void rutgon(PS &p){
    ll uc = gcd(p.tu, p.mau);
    p.tu = p.tu / uc;
    p.mau = p.mau / uc;
}

void in(PS &p){
    cout << p.tu << "/" << p.mau;
}

int main() {
	PS p;
	nhap(p);
	rutgon(p);
	in(p);
	return 0;
}