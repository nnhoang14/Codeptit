//https://code.ptit.edu.vn/student/question/CPP0605
//KHAI BÁO LỚP PHÂN SỐ

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
        friend ostream &operator << (ostream &out, PhanSo &p);
};

PhanSo::PhanSo(ll t, ll m){
    tu = t;
    mau = m;
}

istream &operator >> (istream &in, PhanSo &p){
    in >> p.tu >> p.mau;
    return in;
}

void PhanSo::rutgon(){
    ll uc = __gcd(tu, mau);
    tu /= uc;
    mau /= uc;
}

ostream &operator << (ostream &out, PhanSo &p){
    out << p.tu << "/" << p.mau;
    return out;
}

int main() {
	PhanSo p(1,1);
	cin >> p;
	p.rutgon();
	cout << p;
	return 0;
}