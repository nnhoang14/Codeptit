//https://code.ptit.edu.vn/student/question/CPP0517
//DANH SÁCH NHÂN VIÊN

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
    cin>>ws;
    getline(cin,a.ten);
    getline(cin,a.gt);
    getline(cin,a.date);
    getline(cin,a.add);
    getline(cin,a.mst);
    getline(cin,a.dw);
}

void in(NV &a){
    cout << " " << a.ten << " " << a.gt << " " << a.date << " " << a.add << " "<< a.mst << " "<< a.dw <<endl;;
}

void inds(NV a[], int n){
    for(int i = 0; i < n; i++){
        cout << setw(5) << setfill('0') << i + 1;
        in(a[i]);
    }
}

int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    inds(ds,N);
    return 0;
}