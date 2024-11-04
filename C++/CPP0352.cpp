//https://code.ptit.edu.vn/student/question/CPP0352
//ĐỊA CHỈ EMAIL - 2

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

map<string,int> freq;

void solve(){
    string s, res;
    getline(cin,s);
    for(int i = 0; i < s.length(); i++)
        s[i] = tolower(s[i]);
    vector<string> tmp;
    stringstream ss(s);
    string word;
    while (ss>>word)
    {
        tmp.push_back(word);
    }
    res += tmp[tmp.size()-1];
    for(int i = 0; i < tmp.size()-1 ; i++){
        res += tmp[i][0];
    }
    if(freq.count(res) == 0) cout << res << "@ptit.edu.vn" << endl;
    else cout << res << freq[res] + 1 << "@ptit.edu.vn" << endl;
    freq[res] ++;
}

int main(){
    int test;
    cin >> test;
    cin.ignore();
    while (test--)
    {
        solve();
    }
    return 0;
}