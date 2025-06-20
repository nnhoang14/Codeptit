//https://code.ptit.edu.vn/student/question/CPP0524
//BẢNG ĐIỂM THÀNH PHẦN - 1

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

struct SinhVien{
    string msv;
    string name;
    string cl;
    double d1, d2, d3;
};

void nhap(SinhVien &ds){
        cin >> ws;
        getline(cin, ds.msv);
        getline(cin, ds.name);
        getline(cin, ds.cl);
        cin >> ds.d1 >> ds.d2 >> ds.d3;
}

bool cmp(SinhVien a,SinhVien b){
    return a.msv < b.msv;
}

void sap_xep(SinhVien ds[], int n){
    sort(ds,ds+n,cmp);
}

void in_ds(SinhVien ds[], int n){
    for(int i = 0; i < n; i++){
        cout << i + 1 << " "<< ds[i].msv << " " << ds[i].name << " " << ds[i].cl << " " << fixed << setprecision(1) <<
        ds[i].d1 << " " << fixed << setprecision(1) << ds[i].d2 << " " << fixed << setprecision(1) << ds[i].d3 << endl;
    }
}

int main(){
    int n;
    cin >> n;
    struct SinhVien *ds = new SinhVien[n];
    for(int i = 0; i < n; i++) {
    	nhap(ds[i]);
	}
	sap_xep(ds, n);
    in_ds(ds,n);
    return 0;
}