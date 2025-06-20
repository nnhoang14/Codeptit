//https://code.ptit.edu.vn/beta/problems/DSA03013
//SẮP ĐẶT XÂU KÝ TỰ 2

#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<char, int> a, pair<char, int> b){
    return a.second > b.second;
}

int check(vector<pair<char, int>> kt, int d, string s){
    for(int i = 0; i < kt.size(); i++){
        for(int j = 0; j < kt[i].second; j++){
            if(i + d * j >= s.length()) return 0;
        }
    }
    return 1;
}

int main(){
    int t;
    cin >> t;
    while (t--){
        int d;
        cin >> d;
        string s;
        cin >> s;
        map<char, int> freq;
        for(auto c : s)
            freq[c]++;
        vector<pair<char, int>> kt(freq.begin(), freq.end());
        sort(kt.begin(), kt.end(), cmp);
        if(check(kt, d, s)) cout << "1" << endl;
        else cout << "-1" << endl;
    }
    return 0;
}