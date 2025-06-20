//https://code.ptit.edu.vn/student/question/DSA11002
//CÂY BIỂU THỨC 2

#include <bits/stdc++.h>
using namespace std;

int Calculate(int x, int y, char c) {
    if (c == '+') return x + y;
    if (c == '-') return y - x;
    if (c == '*') return x * y;
    if (c == '/') return y / x;
}

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        int n;
        cin >> n;
        vector<string> a(n);
        for(auto &s : a) cin >> s;
        deque<int> st;
        for (int i = n - 1; i >= 0; --i) {
            if (isdigit(a[i][0])) {
                st.push_front(stoi(a[i]));
            } else {
                int x = st.back(); st.pop_back();
                int y = st.back(); st.pop_back();
                int res = Calculate(x, y, a[i][0]);
                st.push_front(res);
            }
        }
        cout << st.front() << endl;
    }
    return 0;
}
