//https://code.ptit.edu.vn/student/question/CPP0612
//DANH SÁCH ĐỐI TƯỢNG SINH VIÊN - 2

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

class SinhVien{
    private:
        string msv;
        string name;
        string cl;
        string date;
        float gpa;
    public:
        SinhVien();
        static int cnt ;
        friend istream& operator >> (istream &in, SinhVien &ds);
        void rightname();
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
    ds.rightname();
    ds.chuanhoa();
    SinhVien::cnt ++;
    ds.msv = "B20DCCN0";
    ds.msv += (SinhVien::cnt < 10 ? "0" : "") + to_string(SinhVien::cnt);
    return in;
}

void SinhVien::rightname(){
    string res;
    stringstream ss(name);
    string word;
    while (ss >> word)
    {
        word[0] = toupper(word[0]);
        for(int i = 1; i < word.size(); i++)
            word[i] = tolower(word[i]);
        res += word + " ";
    }
    res.pop_back();
    name = res;
}

void SinhVien::chuanhoa(){
    if(date[2] != '/') date = "0" + date;
    if(date[5] != '/') date.insert(3,"0");
}

ostream& operator <<(ostream &out, SinhVien &ds){
    out << ds.msv << " " << ds.name << " " << ds.cl << " " << ds.date << " " << fixed << setprecision(2) << ds.gpa <<endl;
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