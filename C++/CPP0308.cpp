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
        map<char, int> freq;
        for(char c : s){
            freq[c]++;
        }
        for(const auto &entry : freq){
            if(entry.second == 1)cout<<entry.first;
        }
        cout<<endl;
    }
    return 0;
}