//https://code.ptit.edu.vn/student/question/CPP0309
//ĐẾM TỪ

#include <bits/stdc++.h>
using namespace std;

int count_words(const string &s){
    int count=0;
    stringstream stream(s);
    string word;
    while (stream>>word)
    {
        count++;
    }
    return count;
}

int main() {
    int test;
    cin>>test;
    cin.ignore();
    while (test--)
    {
        string s;
        getline(cin,s);
        cout<<count_words(s)<<endl;
    }
    return 0;
}