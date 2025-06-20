//https://code.ptit.edu.vn/student/question/CPP0507
//TÍNH TỔNG HAI PHÂN SỐ

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

typedef struct PhanSo{
    ll tu,mau;    
} PS;

void nhap(PS &res){
    cin >> res.tu >> res.mau;
}

void rutgon(PS &res){
    ll tmp = __gcd(res.tu, res.mau);
    res.tu /= tmp;
    res.mau /= tmp;
}

PS tong(PS p, PS q){
    PS res;
    ll tmp = __gcd(p.mau, q.mau);
    ll l = p.mau * q.mau/tmp;
    res.tu = l / p.mau * p.tu + l / q.mau * q.tu;
    res.mau = l;
    rutgon(res);
    return res;
}

void in(PS res){
    cout << res.tu << "/" << res.mau;
}

int main() {
	struct PhanSo p,q;
	nhap(p); nhap(q);
	PhanSo t = tong(p,q);
	in(t);
	return 0;
}