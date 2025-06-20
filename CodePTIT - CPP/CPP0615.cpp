//https://code.ptit.edu.vn/student/question/CPP0615
//SẮP XẾP DANH SÁCH ĐỐI TƯỢNG NHÂN VIÊN

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

class NhanVien{
    private:
        int id;
        string name;
        string sex;
        string date;
        string address;
        string mst;
        string de;
    public:
        NhanVien();
        static int cnt;
        friend istream& operator >> (istream &in, NhanVien &ds);
        friend ostream& operator <<(ostream &out, NhanVien &ds);
        string getdate(){ return date; }
};

NhanVien::NhanVien(){
    id = 0;
    name = sex = date = address = mst = de = "";
}

int NhanVien::cnt = 0;

istream& operator >> (istream &in, NhanVien &ds){
    in >> ws;
    getline(in, ds.name);
    getline(in, ds.sex);
    getline(in, ds.date);
    getline(in, ds.address);
    getline(in, ds.mst);
    getline(in, ds.de);
    NhanVien::cnt ++;
    ds.id = NhanVien::cnt;
    return in;
}

bool cmp (NhanVien a, NhanVien b){
    int d1,m1,y1,d2,m2,y2;
    sscanf(a.getdate().c_str(), "%d/%d/%d", &m1,&d1,&y1);
    sscanf(b.getdate().c_str(), "%d/%d/%d", &m2,&d2,&y2);
    if(y1 != y2) return y1 < y2;
    if(m1 != m2) return m1 < m2;
    return d1 < d2;
}

void sapxep(NhanVien ds[], int N){
    sort(ds, ds + N, cmp);
}

ostream& operator <<(ostream &out, NhanVien &ds){
    out << setw(5) << setfill('0') << ds.id << " " << ds.name << " " << ds.sex << " " << ds.date << " " << ds.address << " " << ds.mst << " " << ds.de <<endl;
    return out;
}

int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    sapxep(ds, N);
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}