//https://code.ptit.edu.vn/student/question/CPP0601
//KHAI BÁO LỚP SINH VIÊN - 1

#include <bits/stdc++.h>
using namespace std;

class SinhVien{
    private:
        string ten,lop,date;
        double gpa;
    public:
        void nhap();
        void xuat();
        string chuanhoadate(string date);
};

void SinhVien::nhap(){
    getline(cin, ten);
    cin >> lop >> date >> gpa;
}

string SinhVien::chuanhoadate(string s){
    stringstream ss(s);
    string d,m,y;
    getline(ss, d, '/');
    getline(ss, m, '/');
    getline(ss, y, '/');
    if(d.length()==1) d = "0" + d;
    if(m.length()==1) m = "0" + m;
    return d + "/" + m + "/" + y;
}

void SinhVien::xuat(){
    cout << "B20DCCN001 " << ten << " " << lop << " " << chuanhoadate(date) << " " << fixed << setprecision(2) << gpa;
}

int main(){
    SinhVien a;
    a.nhap();
    a.xuat();
    return 0;
}