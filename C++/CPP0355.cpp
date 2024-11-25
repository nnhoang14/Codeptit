//https://code.ptit.edu.vn/student/question/CPP0355
//XỬ LÝ VĂN BẢN

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void chuanhoa(string &s){
    for(auto &c : s)
        c = tolower(c);
}

int main() {
	string word, tmp = "", dau = ".?!";
    vector<string> line;
    while (cin >> word){
        chuanhoa(word);
        tmp += word + " ";
        int n = word.length() - 1;
        if(dau.find(word[n]) != string::npos){
            tmp[0] = toupper(tmp[0]);
            tmp.erase(tmp.length() - 2);
            line.push_back(tmp);
            tmp="";
        }
    }
    for(auto x : line) cout << x << endl;
	return 0;
}