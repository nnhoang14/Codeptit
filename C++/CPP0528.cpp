//https://code.ptit.edu.vn/student/question/CPP0528
//DANH SÁCH THỰC TẬP - 1

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

struct TTS{
    int id;
    string msv;
    string name;
    string cl;
    string email;
    string dn;
};

void nhap(TTS &ds){
    cin >> ws;
    getline(cin, ds.msv);
    getline(cin, ds.name);
    getline(cin, ds.cl);
    getline(cin, ds.email);
    getline(cin, ds.dn);
}

bool cmp(TTS &a, TTS &b){
    return a.name < b.name;
}

void in(TTS ds[], string s, int n){
    vector<TTS> res;
    for(int i = 0 ; i < n; i++)
        if(ds[i].dn == s)res.push_back(ds[i]);
    sort(res.begin(),res.end(),cmp);
    for(auto &x : res){
        cout << x.id << " " << x.msv << " " << x.name << " " << x.cl << " " << x.email << " " << x.dn <<endl;
    }
}

int main(){
    int n;
    cin >> n; 
    TTS ds[n];
    for(int i = 0; i < n ; i++){
        ds[i].id = i + 1;
        nhap(ds[i]);
    }
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string s;
        cin >> s;
        in(ds,s,n);
    }
    return 0;
}