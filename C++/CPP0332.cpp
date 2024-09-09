//https://code.ptit.edu.vn/student/question/CPP0332
//ĐỊA CHỈ EMAIL - 1

#include <bits/stdc++.h>
using namespace std;

void split_string(string s){
    for(int i = 0; i < s.length(); i++){
        s[i] = tolower(s[i]);
    }
    vector<string> email;
    stringstream ss(s);
    string word,last;
    while(ss >> word){
        last = word;
        email.push_back(string(1,word[0]));
    }
    email.pop_back();
    string res = last ;
    for(auto x : email){
        res+=x;
    }
    cout<<res+"@ptit.edu.vn";
}

int main() {
    string s;
    getline(cin,s);
    split_string(s);
    return 0;
}