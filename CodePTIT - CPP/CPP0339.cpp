//https://code.ptit.edu.vn/student/question/CPP0339
//ĐẦU CUỐI GIỐNG NHAU

#include <bits/stdc++.h>
using namespace std;

long long combination(int num){
    long long res = 1;
    for(auto i = 0; i < 2; i++){
        res *= (num - i);
        res /= (i + 1);
    }
    return res;
}

void count_string(string s){
    long long count = s.size();
    map<char,int> freq;
    for(auto c : s){
        freq[c]++;
    }
    for(auto &entry : freq){
        if(entry.second>1)count += combination(entry.second);
    }
    cout<<count<<endl; 
}

int main() {
    int test;
    cin>>test;
    cin.ignore();
    while (test--)
    {
        string s;
        getline(cin,s);
        count_string(s);
    }
    return 0;
}