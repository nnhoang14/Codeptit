//https://code.ptit.edu.vn/student/question/CPP0804
//LIỆT KÊ TỪ KHÁC NHAU

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void chuanhoa(string s){
    for(auto &c : s)
        c = tolower(c);
}
int main(){
    ifstream input("DATA.in");
    string line;
    set<string> ds;
    while (getline(input,line)){
        stringstream ss(line);
        string word;
        while (ss >> word){
            chuanhoa(word);
            ds.insert(word);
        }
    }
    input.close();
    for(auto &x : ds) cout << x << endl;
    return 0;
}