//https://code.ptit.edu.vn/student/question/CPP0505
//CẤU TRÚC NHÂN VIÊN

#include <bits/stdc++.h>
using namespace std;

typedef struct NhanVien{
    string ten;
    string gt;
    string date;
    string add;
    string mst;
    string dw;
} NV;

void nhap(NV &a){
    getline(cin,a.ten);
    getline(cin,a.gt);
    getline(cin,a.date);
    getline(cin,a.add);
    getline(cin,a.mst);
    getline(cin,a.dw);
}

void in(NV &a){
    cout << "00001 " << a.ten << " " << a.gt << " " << a.date << " " << a.add << " "<< a.mst << " "<< a.dw ;
}

int main(){
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}