//https://code.ptit.edu.vn/student/question/CPP0513
//DANH SÁCH SINH VIÊN - 1

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

struct SinhVien{
    string msv = "B20DCCN0";
    string ten;
    string cl;
    string date;
    float gpa;
};

void nhap(SinhVien *ds, int n){
    for(int i = 0; i < n; i++){
        cin.ignore();
        getline(cin,ds[i].ten);
        getline(cin,ds[i].cl);
        getline(cin,ds[i].date);
        cin>>ds[i].gpa;
        if(i + 1 < 10)ds[i].msv = ds[i].msv + "0" +to_string(i+1);
        else ds[i].msv = ds[i].msv + to_string(i+1);
        if(ds[i].date[2]!='/') ds[i].date = "0" + ds[i].date;
        if(ds[i].date[5]!='/') ds[i].date.insert(3,"0");
    }
}

void in(SinhVien *ds, int n){
    for(int i = 0; i < n; i++){
        cout<<ds[i].msv<<" "<<ds[i].ten<<" "<<ds[i].cl<<" "<<ds[i].date<<" "<<fixed<<setprecision(2)<<ds[i].gpa;
        cout << endl;
    }
}

int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;
}