//https://code.ptit.edu.vn/student/question/CPP0414
//SẮP XẾP CHỮ SỐ
#include <bits/stdc++.h>
using namespace std;

void downcase(string &s){
    for(int i = 0; i < s.size(); i++){
        s[i] = tolower(s[i]);
    }
}

int main() {
    int test;
    cin>>test;
    while (test--)
    {
        int n;
        cin>>n;
        vector<string> a(n);
        map<char, int> freq;
        for(int i = 0; i < n; i++)cin>>a[i];
        for(int i = 0; i < n; i++){
            for(auto c : a[i]){
                freq[c]++;
            }
        }
        for(auto &entry : freq){
            cout << entry.first << " ";
        }
        cout<<endl;
    }
    return 0;
}