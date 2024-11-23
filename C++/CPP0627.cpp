//https://code.ptit.edu.vn/student/question/CPP0627
//TÌM KIẾM GIẢNG VIÊN

#include <bits/stdc++.h>
using namespace std;

class GiangVien{
    private:
        string mgv;
        string name;
        string khoa;
    public:
        GiangVien(){ mgv = name = khoa = ""; }
        static int id;
        friend istream &operator >> (istream &in, GiangVien &ds);
        friend ostream &operator << (ostream &out, GiangVien ds);
        string getmgv(){ return mgv; }
        string getname(){ return name; }
        string getkhoa(){ return khoa; }
};

int GiangVien::id = 0;

string chuanhoa(string s){
    stringstream ss(s);
    string word, res = "";;
    while (ss >> word){
        res += toupper(word[0]);
    }
    return res;
}

istream &operator >> (istream &in, GiangVien &ds){
    in >> ws;
    getline(in, ds.name);
    getline(in, ds.khoa);
    ds.khoa = chuanhoa(ds.khoa);
    GiangVien::id++; 
    ds.mgv = "GV";
    ds.mgv += (GiangVien::id < 10 ? "0" : "") + to_string(GiangVien::id);
    return in;
}

ostream &operator << (ostream &out, GiangVien ds){
    out << ds.mgv << " " << ds.name << " " << ds.khoa << endl;
    return out;
}

void lowcase_word(string &s){
    for(auto &c : s)
        c = tolower(c);
}

void lk(GiangVien ds[], int n, string s){
    lowcase_word(s);
    for(int i = 0; i < n; i++){
        string tmp = ds[i].getname();
        lowcase_word(tmp);
        if(tmp.find(s) != string::npos) cout << ds[i];
    }
}

int main(){
    GiangVien ds[1000];
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)cin >> ds[i];
    int t;
    cin >> t;
    cin.ignore();
    while (t--){
        string s;
        getline(cin, s);
        cout << "DANH SACH GIANG VIEN THEO TU KHOA " << s << ":" << endl;
        lk(ds,n,s);
    }
    
    return 0;
}