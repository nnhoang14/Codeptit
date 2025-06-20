//https://code.ptit.edu.vn/student/question/CPP0518
//SẮP XẾP DANH SÁCH NHÂN VIÊN

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

struct NhanVien{
    int id;
    string name;
    string sex;
    string date;
    string address;
    string code;
    string time;
};

void nhap(NhanVien &ds){
        cin >> ws;
        getline(cin, ds.name);
        getline(cin, ds.sex);
        getline(cin, ds.date);
        getline(cin, ds.address);
        getline(cin, ds.code);
        getline(cin, ds.time);
}

bool cmp(NhanVien a,NhanVien b){
    int d1, m1, y1, d2, m2, y2;
    sscanf(a.date.c_str(), "%d/%d/%d", &m1, &d1, &y1);
    sscanf(b.date.c_str(), "%d/%d/%d", &m2, &d2, &y2);
    if (y1 != y2) return y1 < y2;
    if (m1 != m2) return m1 < m2;
    return d1 < d2;
}

void sapxep(NhanVien ds[], int n){
    for(int i = 0; i < n; i++)
        ds[i].id = i + 1;
    sort(ds,ds+n,cmp);
}

void inds(NhanVien ds[], int n){
    for(int i = 0; i < n; i++){
        cout << setw(5) << setfill('0') << ds[i].id << " " << ds[i].name << " " << ds[i].sex << " " << 
        ds[i].date << " " << ds[i].address << " " << ds[i].code << " " << ds[i].time << endl;
    }
}

int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    sapxep(ds, N);
    inds(ds, N);
    return 0;
}