//https://code.ptit.edu.vn/student/question/CPP0624
//LIỆT KÊ SINH VIÊN THEO NGÀNH

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
        string getmsv(){return msv; }
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

void upcase_word(string &s){
    for(auto &x : s)
        x = toupper(x);
}

void lk(SinhVien ds[], int n, string s){
    string res = "";
    stringstream ss(s);
    string word;
    int cnt = 0;
    while (ss >> word){
        res += word[0];
        cnt ++;
        if(cnt == 2) break;
    }
    for(int i = 0; i < n; i ++){
        string tmp = ds[i].getmsv();
        if(res == "CN" || res == "AT"){
            string k = ds[i].getcl();
            if(tmp.find(res) != string::npos && k[0] != 'E') cout << ds[i];
        }
        else if (tmp.find(res) != string::npos) cout << ds[i];
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
        upcase_word(s);
        cout << "DANH SACH SINH VIEN NGANH " << s << ":" << endl;
        lk(ds,n,s);
    }
    return 0;
}