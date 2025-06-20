//https://code.ptit.edu.vn/student/question/DSA07011
//BIẾN ĐỔI HẬU TỐ - TIỀN TỐ

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
        for(auto c : s) {
            if(!isOperator(c)) {
                st.push(string(1, c));
            } else {
                string a = st.top(); st.pop();
                string b = st.top(); st.pop();
                string tmp = c + b + a;
                st.push(tmp);
            }
        }
        cout << st.top() << endl;
    }
    return 0;
}