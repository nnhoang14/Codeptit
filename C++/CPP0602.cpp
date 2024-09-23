//https://code.ptit.edu.vn/student/question/CPP0602
//KHAI BÁO LỚP SINH VIÊN - 2

#include <bits/stdc++.h>
using namespace std;

class SinhVien{
    private:
        string ten,lop,date;
        double gpa;
    public:
        friend istream& operator >> (istream& in, SinhVien &a);
        friend ostream& operator << (ostream& out, SinhVien &a);
};

istream& operator >> (istream& in, SinhVien &a){
    getline(in, a.ten);
    in >> a.lop >> a.date >> a.gpa;
    if(a.date[1] == '/')a.date = "0" + a.date;
    if(a.date[4] == '/')a.date.insert(3,"0");
    return in;
}

ostream& operator << (ostream& out, SinhVien &a){
    out << "B20DCCN001 " << a.ten << " " << a.lop << " " << a.date << " " << fixed << setprecision(2) << a.gpa;
    return out;
}

int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}
