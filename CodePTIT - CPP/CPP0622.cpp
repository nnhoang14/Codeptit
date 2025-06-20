//https://code.ptit.edu.vn/student/question/CPP0622
//LIỆT KÊ SINH VIÊN THEO LỚP

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
        void nhap();
        void in();
        string getcl(){ return cl; }
};

SinhVien::SinhVien(){
    msv =name = cl = email = "";
}

void SinhVien::nhap(){
        cin >> ws;
        getline(cin, msv);
        getline(cin, name);
        getline(cin, cl);
        getline(cin, email);
}

void SinhVien::in(){
        cout << msv << " " << name << " " << cl << " " << email <<endl;
}

void lk(string s,SinhVien ds[],int n){
    cout << "DANH SACH SINH VIEN LOP " << s << ":" << endl;
    for(int i = 0; i < n; i++){
        if(ds[i].getcl() == s) ds[i].in();
    }
    cout << endl;
}

int main(){
    SinhVien ds[1000];
    int n,i;
    cin >> n;
    for (int i = 0; i < n; i++)ds[i].nhap();
    int t;
    cin >> t;
    cin >> ws;
    while (t--){
        string s;
        getline(cin,s);
        lk(s,ds,n);
    }
    return 0;
}