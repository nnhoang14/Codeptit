//https://code.ptit.edu.vn/student/question/DSA07002
//NGĂN XẾP 2

#include <bits/stdc++.h>
using namespace std;

void printST(stack<string> st) {
    if (st.empty()) {
        cout << "NONE" << endl;
    } else {
        cout << st.top() << endl;
    }
}

int main() {
    stack<string> st;
    int t;
    cin >> t;
    cin.ignore();
    while (t--){
        string s;
        getline(cin, s);
        stringstream ss(s);
        string cmd, val;
        ss >> cmd;
        if(cmd == "PUSH") {
            ss >> val;
            st.push(val);
        } else if (cmd == "POP") {
            if (!st.empty()) st.pop();
        } else if (cmd == "PRINT") {
            printST(st);
        }
    }
    return 0;
}