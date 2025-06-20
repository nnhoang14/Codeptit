//https://code.ptit.edu.vn/student/question/DSA07013
//TÍNH GIÁ TRỊ BIỂU THỨC HẬU TỐ

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
        for(auto x : s){
            if(isdigit(x)) {
                st.push(x - '0');
            } else {
                int a = st.top(); st.pop();
                int b = st.top(); st.pop();
                if(x == '+') st.push(a + b);
                else if(x == '-') st.push(b - a);
                else if(x == '*') st.push(a * b);
                else if(x == '/') st.push(b / a);
            }
        }
        cout << st.top() << endl;
    }
    return 0;
}