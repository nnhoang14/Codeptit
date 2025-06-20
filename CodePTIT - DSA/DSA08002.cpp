//https://code.ptit.edu.vn/student/question/DSA08002
//CẤU TRÚC DỮ LIỆU HÀNG ĐỢI 2

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    cin.ignore();
    queue<string> q;
    while (n--){
        string s;
        getline(cin, s);
        stringstream ss(s);
        string status, val;
        ss >> status;
        if(status == "PUSH") {
            ss >> val;
            q.push(val);
        } else if(status == "POP") {
            if (!q.empty()) q.pop();
        } else if(status == "PRINTFRONT") {
            cout << (q.empty() ? "NONE" : q.front()) << endl;
        }
    }
    return 0;
}