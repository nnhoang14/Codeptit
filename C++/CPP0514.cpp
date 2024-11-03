//https://code.ptit.edu.vn/student/question/CPP0514
//DANH SÁCH SINH VIÊN - 2

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

string chuanhoa(string s){
    stringstream ss(s);
    string word,res;
    while (ss>>word)
    {
        word[0] = toupper(word[0]);
        for(int i= 1; i < word.size(); i++){
            word[i] = tolower(word[i]);
        }
        res += word + " ";
    }
    res.pop_back();
    return res;
}

void nhap(SinhVien *ds, int n){
    for(int i = 0; i < n; i++){
        cin.ignore();
        getline(cin,ds[i].ten);
        getline(cin,ds[i].cl);
        getline(cin,ds[i].date);
        cin>>ds[i].gpa;
        ds[i].ten = chuanhoa(ds[i].ten);
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