//https://code.ptit.edu.vn/student/question/CPP204C4000
//CẤU TRÚC SINH VIÊN

#include <bits/stdc++.h>
using namespace std;

typedef struct SinhVien{
    string name;
    string cl;
    string date;
    double gpa;
} SV;

void nhapThongTinSV(SV &a){
    getline(cin, a.name);
    cin >> a.cl >> a.date >> a.gpa;
}

string chuanhoa(string d){
    if(d[1] == '/') d = "0" + d;
    if(d[4]== '/')d.insert(3,"0");
    return d;
}

void inThongTinSV(SV a){
    cout << "N20DCCN001 " << a.name << " " << a.cl << " " << chuanhoa(a.date) << " " << fixed << setprecision(2) << a.gpa;
}

int main(){
    struct SinhVien a;
    nhapThongTinSV(a);
    inThongTinSV(a);
    return 0;
}