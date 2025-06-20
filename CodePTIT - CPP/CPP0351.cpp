//https://code.ptit.edu.vn/student/question/CPP0351
//CHUẨN HÓA HỌ TÊN

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

string chuanhoa(string s){
    s[0] = toupper(s[0]);
    for(int i = 1; i < s.length(); i++)
        s[i] = tolower(s[i]);
    return s;
}

void solve(){
    int status;
    cin >> status;
    cin.ignore();
    string s,res = "";
    getline(cin,s);
    vector<string> tmp;
    stringstream ss(s);
    string word;
    while (ss>>word)
    {
        tmp.push_back(chuanhoa(word));
    }
    if(status == 1){
        res += tmp[tmp.size()-1] + " ";
        for(int i = 0; i < tmp.size()-1; i++){
            res += tmp[i] + " ";
        }
        res.pop_back();
    }
    else{
        for(int i = 1; i <= tmp.size()-1; i++){
            res += tmp[i] + " ";
        }
        res += tmp[0];
    }
    cout << res << endl;
}

int main(){
    int test;
    cin >> test;
    while (test--)
    {
        solve();
    }
    return 0;
}