//https://code.ptit.edu.vn/student/question/CPP0610
//TÍNH TỔNG HAI ĐỐI TƯỢNG PHÂN SỐ

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

class PhanSo{
    private:
        ll mau,tu;
    public:
        void rutgon ();
        PhanSo(ll t, ll m);
        friend istream &operator >> (istream &in, PhanSo &p);
        friend ostream &operator << (ostream &out, PhanSo p);
        PhanSo operator + (PhanSo &p);
};

PhanSo::PhanSo(ll t = 0, ll m = 1){
    tu = t;
    mau = m;
}

istream &operator >> (istream &in, PhanSo &p){
    return in >> p.tu >> p.mau;
}

void PhanSo::rutgon(){
    ll uc = __gcd(tu, mau);
    tu /= uc;
    mau /= uc;
}

PhanSo PhanSo::operator + (PhanSo &p){
    PhanSo res;
    res.tu = tu * p.mau + p.tu * mau;
    res.mau = mau * p.mau;
    res.rutgon();
    return res;
}

ostream &operator << (ostream &out, PhanSo p){
    return out << p.tu << "/" << p.mau;
}

int main() {
	PhanSo p(1,1), q(1,1);
	cin >> p >> q;
	cout << p + q;
	return 0;
}