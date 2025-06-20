//https://code.ptit.edu.vn/student/question/CPP0606
//KHAI BÁO LỚP NHÂN VIÊN

#include <bits/stdc++.h>
using namespace std;

class NhanVien{
    private:
        string ten;
        string gt;
        string date;
        string add;
        string mst;
        string dw;
    public:
        friend istream &operator >> (istream &in, NhanVien &a);
        friend ostream &operator >> (ostream &out, NhanVien &a);
} ;

istream &operator >> (istream &in, NhanVien &a){
    cin>>ws;
    getline(in,a.ten);
    getline(in,a.gt);
    getline(in,a.date);
    getline(in,a.add);
    getline(in,a.mst);
    getline(in,a.dw);
    return in;
}

ostream &operator >> (ostream &out, NhanVien &a){
    out << "00001 " << a.ten << " " << a.gt << " " << a.date << " " << a.add << " "<< a.mst << " "<< a.dw <<endl;
    return out;
}

int main(){
    NhanVien a;
    cin >> a;
    cout >> a;
    return 0;
}