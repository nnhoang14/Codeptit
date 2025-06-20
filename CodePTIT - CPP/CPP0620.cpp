//https://code.ptit.edu.vn/student/question/CPP0620
//SẮP XẾP SINH VIÊN THEO LỚP

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

class SinhVien{
    private:
        string msv;
        string name;
        string cl;
        string email;
    public:
        SinhVien();
        friend istream &operator >> (istream &in, SinhVien &ds);
        friend ostream &operator << (ostream &out, SinhVien ds);
        string getcl(){ return cl; }
        string getmsv(){ return msv; }
};

SinhVien::SinhVien(){
    msv =name = cl = email = "";
}

istream &operator >> (istream &in, SinhVien &ds){
    in >> ws;
    getline(in, ds.msv);
    getline(in, ds.name);
    getline(in, ds.cl);
    getline(in, ds.email);
    return in;
}

bool cmp (SinhVien a, SinhVien b){
    if(a.getcl() == b.getcl()) return a.getmsv() < b.getmsv();
    return a.getcl() < b.getcl();
}

void sapxep(SinhVien ds[], int n){
    sort(ds, ds + n, cmp);
}

ostream &operator <<(ostream &out, SinhVien ds){
    out << ds.msv << " " << ds.name << " " << ds.cl << " " << ds.email <<endl;
    return out;
}

int main(){
    SinhVien ds[1000];
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) cin >> ds[i];
    sapxep(ds, n);
    for(int i = 0; i < n; i++) cout << ds[i];
    return 0;
}