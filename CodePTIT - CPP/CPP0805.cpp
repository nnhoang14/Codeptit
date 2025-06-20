//https://code.ptit.edu.vn/student/question/CPP0805
//HỢP VÀ GIAO CỦA HAI FILE VĂN BẢN

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void chuanhoa(string &s){
    for(auto &c : s)
        c = tolower(c);
}

int main(){
    string f1 = "DATA1.in";
    string f2 = "DATA2.in";
    ifstream input1(f1);
    string line;
    map<string, int> m1,m2;
    set<string> ds;
    while (getline(input1,line)){
        stringstream ss(line);
        string word;
        while (ss >> word){
            chuanhoa(word);
            ds.insert(word);
            m1[word] ++;
        }
    }
    input1.close();
    ifstream input2(f2);
    while (getline(input2,line)){
        stringstream ss(line);
        string word;
        while (ss >> word){
            chuanhoa(word);
            ds.insert(word);
            m2[word] ++;
        }
    }
    input2.close();
    for(auto &x : ds) cout << x << " ";
    cout << endl;
    for(auto &entry : m1){
        if(m2[entry.first] > 0) cout << entry.first << " ";
    }
    return 0;
}