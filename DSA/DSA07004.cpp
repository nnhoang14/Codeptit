//https://code.ptit.edu.vn/student/question/DSA07004
//ĐẾM SỐ DẤU NGOẶC ĐỔI CHIỀU

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string s;
        cin >> s;
        stack<char> st;
        int res = 0;
        for (char x : s) {
            if(x == ')' && !st.empty() && st.top() == '(') {
                st.pop();
            } else {
                st.push(x);
            }
        }
        while(!st.empty()) {
            char x = st.top();
            st.pop();
            if (x == '(') res++;
            if (st.top() == ')') res++;
            st.pop();
        }
        cout << res << endl;
    }
    return 0;
}