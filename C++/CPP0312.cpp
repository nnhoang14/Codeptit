//https://code.ptit.edu.vn/student/question/CPP0312
//XÂU PANGRAM

#include <bits/stdc++.h>
using namespace std;

void check_words(const string &s, int k){
    set<char> word;
    for(auto c : s){
        if(word.count(c)==0)word.insert(c);
    }
    int res=26-word.size()-k;
    if(res<=0)cout<<"1"<<endl;
    else cout<<"0"<<endl;
}

int main() {
    int test;
    cin>>test;
    while (test--)
    {
        cin.ignore();
        string s;
        getline(cin,s);
        int k;
        cin>>k;
        check_words(s,k);
    }
    return 0;
}
