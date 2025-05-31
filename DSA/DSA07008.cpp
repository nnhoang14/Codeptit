// https://code.ptit.edu.vn/student/question/DSA07008
// BIẾN ĐỔI TRUNG TỐ - HẬU TỐ

#include <bits/stdc++.h>
using namespace std;

int prio(char c) {
    if (c == '^') return 4;
    if (c == '*' || c == '/') return 3;
    if (c == '+' || c == '-') return 2;
    return 1;
}

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string s;
        getline(cin, s);
        stack<char> st;
        for(auto x : s) {
            if (x == '(') {
                st.push(x);
            } else if (x == ')') {
                while (!st.empty() && st.top() != '(') {
                    cout << st.top();
                    st.pop();
                }
                st.pop();
            } else if (isalnum(x)) {
                cout << x; 
            } else {
                while (!st.empty() && prio(st.top()) >= prio(x)) {
                    cout << st.top();
                    st.pop();
                }
                st.push(x);
            }
        }
        while (!st.empty()) {
            if (!st.empty()) cout << st.top();
            st.pop();
        }
        cout << endl;
    }
    return 0;
}