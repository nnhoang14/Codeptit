//https://code.ptit.edu.vn/student/question/CPP0628
//DANH SÁCH DOANH NGHIỆP NHẬN SINH VIÊN THỰC TẬP - 1

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

class DoanhNghiep{
    private:
        string name;
        string group;
        int number;
    public:
        friend istream &operator >> (istream &in, DoanhNghiep &ds);
        friend ostream &operator << (ostream &out, DoanhNghiep ds);
        int getnumber(){ return number; }
        int getname(){ return name; }
};

istream &operator >> (istream &in, DoanhNghiep &ds){
    in >> ws;
    getline(in , ds.name);
    getline(in, ds.group);
    in >> ds.number;
    return in;
}
ostream &operator << (ostream &out, DoanhNghiep ds){
    out << ds.name << " " << ds.group << " " << ds.number << endl;
    return out;
}

bool cmp(DoanhNghiep a, DoanhNghiep b){
    if(a.getnumber() == b.getnumber()) return a.getname() < b.getname()
    return a.getnumber() > b.getnumber();
}

int main(){
    DoanhNghiep ds[1000];
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)cin >> ds[i];
    sort(ds, ds + n, cmp);
    for(int i = 0; i < n; i++)cout << ds[i];
    return 0;
}