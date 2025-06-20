//https://code.ptit.edu.vn/student/question/CPP0354
//MÃ HÓA

#include <bits/stdc++.h>
using namespace std;

int main() {
    int test;
    cin>>test;
    cin.ignore();
    while (test--)
    {
        string s;
        getline(cin,s);
        map<char,int> freq;
        vector<char> stt;
        for(auto c : s){
            if(freq[c] == 0)stt.push_back(c);
            freq[c]++;
        }
        for(auto c : stt){
            cout<<c<<freq[c];
        }
        cout<<endl; 
    }
    return 0;
}