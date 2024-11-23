//https://code.ptit.edu.vn/student/question/CPP0625
//SẮP XẾP DANH SÁCH GIẢNG VIÊN

#include <bits/stdc++.h>
using namespace std;

class GiangVien{
    private:
        string mgv;
        string name;
        string khoa;
    public:
        GiangVien(){ mgv = name = khoa = ""; }
        static int id;
        friend istream &operator >> (istream &in, GiangVien &ds);
        friend ostream &operator << (ostream &out, GiangVien ds);
        void chuanhoa();
        string getmgv(){ return mgv; }
        string getname(){ return name; }
        string getkhoa(){ return khoa; }
};

int GiangVien::id = 0;

void GiangVien::chuanhoa(){
    string res;
    stringstream ss(khoa);
    string word;
    while (ss >> word){
        res += toupper(word[0]);
    }
    khoa = res;
}

istream &operator >> (istream &in, GiangVien &ds){
    in >> ws;
    getline(in, ds.name);
    getline(in, ds.khoa);
    ds.chuanhoa();
    GiangVien::id++; 
    ds.mgv = "GV";
    ds.mgv += (GiangVien::id < 10 ? "0" : "") + to_string(GiangVien::id);
    return in;
}

ostream &operator << (ostream &out, GiangVien ds){
    out << ds.mgv << " " << ds.name << " " << ds.khoa << endl;
    return out;
}

string ten(GiangVien a){
    stringstream ss(a.getname());
    string word, res;
    while (ss >> word){
        res = word;
    }
    return res;
}

bool cmp(GiangVien a, GiangVien b){
    string ln1 = ten(a), ln2 = ten(b);
    if(ln1 == ln2) return a.getmgv() < b.getmgv();
    return ln1 < ln2;
}

int main(){
    GiangVien ds[1000];
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)cin >> ds[i];
    sort(ds, ds + n, cmp);
    for(int i = 0; i < n; i++)cout << ds[i];
    return 0;
}