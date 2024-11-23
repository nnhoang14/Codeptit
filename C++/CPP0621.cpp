//https://code.ptit.edu.vn/student/question/CPP0621
//SẮP XẾP THEO MÃ SINH VIÊN

#include <bits/stdc++.h>
using namespace std;

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
        string getmsv(){ return msv; }
};

SinhVien::SinhVien(){
    msv = name = cl = email = "";
}

istream &operator >> (istream &in, SinhVien &ds){
    in >> ws;
    getline(in, ds.msv);
    getline(in, ds.name);
    getline(in, ds.cl);
    getline(in, ds.email);
    return in;
}

ostream &operator << (ostream &out, SinhVien ds){
    out << ds.msv << " " << ds.name << " " << ds.cl << " " << ds.email << endl;
    return out;
}

bool cmp(SinhVien a, SinhVien b){
    return a.getmsv() < b.getmsv();
}

int main(){
    SinhVien a;
    vector<SinhVien> ds;
    while(cin >> a){
        ds.push_back(a);
    }
    sort(ds.begin(), ds.end(), cmp);
    for(auto x : ds) cout << x;
    return 0;
}
