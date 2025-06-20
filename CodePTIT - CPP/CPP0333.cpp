//https://code.ptit.edu.vn/student/question/CPP0333
//CHUẨN HÓA HỌ TÊN

#include <bits/stdc++.h>
using namespace std;

void chuan_hoa(string &s){
    s[0] = toupper(s[0]);
    for(int i = 1; i < s.length(); i++)
        s[i] = s[i] = tolower(s[i]);
}

void first_name(string &s){
    for (char &c : s)
        c = toupper(c); 
}

void split_string(string s){
    vector<string> name;
    stringstream ss(s);
    string word,last;
    while(ss >> word){
        last = word;
        chuan_hoa(word);
        name.push_back(word);
    }
    name.pop_back();
    string res;
    first_name(last);
    for(int i = 0; i < name.size(); i++){
        res = res + name[i];
        if(i == (name.size() - 1))res += ", ";
        else res += " ";
    }
    cout<<res + last;
}

int main() {
    string s;
    getline(cin,s);
    split_string(s);
    return 0;
}