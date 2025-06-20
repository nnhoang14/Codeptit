//https://code.ptit.edu.vn/student/question/CPP0611
//DANH SÁCH ĐỐI TƯỢNG SINH VIÊN - 1

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

class SinhVien{
    private:
        string msv;
        string name;
        string cl;
        string date;
        double gpa;
    public:
        SinhVien();
        static int cnt ;
        friend istream& operator >> (istream &in, SinhVien &ds);
        void chuanhoa();
        friend ostream& operator <<(ostream &out, SinhVien &ds);
        
};

SinhVien::SinhVien(){
    msv = name = cl = date = " ";
    gpa = 0;
}

int SinhVien::cnt = 0;

istream& operator >> (istream &in, SinhVien &ds){
    in.ignore();
    getline(in, ds.name);
    getline(in, ds.cl);
    getline(in, ds.date);
    in >> ds.gpa;
    ds.chuanhoa();
    SinhVien::cnt ++;
    ds.msv = "B20DCCN0";
    ds.msv += (SinhVien::cnt < 10 ? "0" : "") + to_string(SinhVien::cnt);
    return in;
}

void SinhVien::chuanhoa(){
    if(date[2] != '/') date = "0" + date;
    if(date[5] != '/') date.insert(3,"0");
}

ostream& operator <<(ostream &out, SinhVien &ds){
    out << ds.msv << " " << ds.name << " " << ds.cl << " " << ds.date << " " << fixed << setprecision(2) << ds.gpa;
    return out;
}

int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}