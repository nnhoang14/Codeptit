//https://code.ptit.edu.vn/student/question/DSA07010
//BIẾN ĐỐI TIỀN TỐ - HẬU TỐ

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
        for(int i = s.length() - 1; i >= 0; i--) {
            if(!isOperator(s[i])) {
                st.push(string(1, s[i]));
            } else {
                string a = st.top(); st.pop();
                string b = st.top(); st.pop();
                string tmp = a + b + s[i];
                st.push(tmp);
            }
        }
        cout << st.top() << endl;
    }
    return 0;
}