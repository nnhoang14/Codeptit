//https://code.ptit.edu.vn/student/question/DSA07012
//BIẾN ĐỔI HẬU TỐ - TRUNG TỐ

#include <bits/stdc++.h>
using namespace std;

int isOperator(char c) {
    return c == '+' || c == '-' || c == '*' || c == '/';
}

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string s;
        getline(cin, s);
        stack<string> st;
        for(auto x : s) {
            if(!isOperator(x)) {
                st.push(string(1, x));
            } else {
                string b = st.top(); st.pop();
                string a = st.top(); st.pop();
                string tmp = "(" + a + x + b + ")";
                st.push(tmp);
            }
        }
        cout << st.top() << endl;
    }
    return 0;
}