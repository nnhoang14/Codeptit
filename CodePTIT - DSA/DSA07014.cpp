//https://code.ptit.edu.vn/student/question/DSA07014
//TÍNH GIÁ TRỊ BIỂU THỨC TIỀN TỐ

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string s;
        getline(cin, s);
        stack<int> st;
        for(int i = s.size() - 1; i >= 0; --i) {
            if(isdigit(s[i])){
                st.push(s[i] - '0');
            } else {
                int a = st.top(); st.pop();
                int b = st.top(); st.pop();
                if(s[i] == '+')st.push(a + b);
                else if(s[i] == '-') st.push(a - b);
                else if(s[i] == '*') st.push(a * b);
                else if(s[i] == '/') st.push(a / b);
            }
        }
        cout << st.top() << endl;
    }
    return 0;
}