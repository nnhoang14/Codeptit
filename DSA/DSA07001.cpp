//https://code.ptit.edu.vn/student/question/DSA07001
//NGĂN XẾP 1

#include <bits/stdc++.h>
using namespace std;

void show(stack<string> st) {
    if (st.empty()) {
        cout << "empty" << endl;
    } else {
        stack<string> temp;
        while (!st.empty()) {
            temp.push(st.top());
            st.pop();
        }
        while (!temp.empty()) {
            cout << temp.top() << " ";
            temp.pop();
        }
        cout << endl;
    }
}

int main() {
    stack<string> st;
    string s;
    while (getline(cin, s)){
        stringstream ss(s);
        string cmd, val;
        ss >> cmd;
        if(cmd == "push") {
            ss >> val;
            st.push(val);
        } else if (cmd == "pop") {
            if (!st.empty()) st.pop();
        } else if (cmd == "show") {
            show(st);
        }
    }
    return 0;
}