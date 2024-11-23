//https://code.ptit.edu.vn/student/question/CPP0623
//LIỆT KÊ SINH VIÊN THEO KHÓA

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
        string getcl(){ return cl; }
};

SinhVien::SinhVien(){
    msv = name = cl = email = "";
}

istream &operator >> (istream &in, SinhVien &ds){
    cin >> ws;
    getline(cin, ds.msv);
    getline(cin, ds.name);
    getline(cin, ds.cl);
    getline(cin, ds.email);
    return in;
}

ostream &operator << (ostream &out, SinhVien ds){
    out << ds.msv << " " << ds.name << " " << ds.cl << " " << ds.email << endl;
    return out;
}

void lk(SinhVien ds[], int n, string s){
    string tmp = s.substr(2,3);
    for(int i = 0; i < n; i ++){
        string k = ds[i].getcl().substr(1,2);
        if(tmp == k) cout << ds[i];
    }
}

int main(){
    SinhVien ds[1000];
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)cin >> ds[i];
    int t;
    cin >> t;
    cin.ignore();
    while (t--){
        string s;
        getline(cin, s);
        cout << "DANH SACH SINH VIEN KHOA " << s << ":" << endl;
        lk(ds,n,s);
    }
    return 0;
}