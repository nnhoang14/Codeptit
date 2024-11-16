//https://code.ptit.edu.vn/student/question/CPP0512
//PHÉP TOÁN VỚI PHÂN SỐ
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

struct PhanSo{
    int tu, mau;
};

PhanSo rutgon(PhanSo a){
    ll uc = __gcd(a.tu, a.mau);
    a.tu /= uc;
    a.mau /= uc;
    return a;
}

PhanSo Plus(PhanSo a, PhanSo b){
    PhanSo res;
    res.mau = a.mau * b.mau;
    res.tu = a.tu * b.mau + b.tu * a.mau;
    res = rutgon(res);
    res.mau = res.mau * res.mau;
    res.tu = res.tu * res.tu;
    rutgon(res);
    return res;
}

PhanSo Multi(PhanSo a, PhanSo b){
    PhanSo res;
    res.mau = a.mau * b.mau;
    res.tu = a.tu * b.tu;
    rutgon(res);
    return res;
}

void process(PhanSo a, PhanSo b){
    rutgon(a);
    rutgon(b);
    PhanSo c = Plus(a,b);
    PhanSo d = Multi(Multi(a,b),c);
    cout << c.tu << "/" << c.mau << " ";
    cout << d.tu << "/" << d.mau << endl;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		PhanSo A;
		PhanSo B;
		cin >> A.tu >> A.mau >> B.tu >> B.mau;
		process(A, B);
	}
}
