//https://code.ptit.edu.vn/student/question/CPP0504
//CẤU TRÚC SINH VIÊN

#include <bits/stdc++.h>
using namespace std;

typedef struct Date{
    int dd,mm,yyyy;
    string res;
} Dt;

void nhap_date(Dt &ns){
    char separator;
    cin >> ns.dd >> separator >> ns.mm >> separator >> ns.yyyy;
    string dd = (ns.dd < 10 ? "0" : "") + to_string(ns.dd);
    string mm = (ns.mm < 10 ? "0" : "") + to_string(ns.mm);
    string yyyy = to_string(ns.yyyy);
    ns.res = dd + "/" + mm + "/" + yyyy;
}

typedef struct SinhVien{
    string ten;
    string msv;
    Dt ns;
    double gpa;
} SV;

void nhap(SV &a){
    getline(cin,a.ten);
    getline(cin,a.msv);
    nhap_date(a.ns);
    cin >> a.gpa;
}

void in(SV &a){
    cout << "B20DCCN001 " << a.ten << " " << a.msv << " " << a.ns.res << " " << fixed << setprecision(2) << a.gpa;
}

int main(){
    struct SinhVien a;
    nhap(a);
    in(a);
    return 0;
}