//https://code.ptit.edu.vn/student/question/CPP0502
//CẤU TRÚC THÍ SINH

#include <bits/stdc++.h>
using namespace std;

typedef struct ThiSinh{
    string ten;
    string ngaysinh;
    double m1, m2, m3;
} TS;

void nhap(TS &A){
    getline(cin,A.ten);
    getline(cin,A.ngaysinh);
    cin >> A.m1 >> A.m2 >> A.m3;
}

void in(TS &A){
    double diem = A.m1 + A.m2 + A.m3;
    cout << A.ten << " " << A.ngaysinh << " " << setprecision(1) << fixed << diem;
}

int main(){
    TS A;
    nhap(A);
    in(A);
    return 0;
}