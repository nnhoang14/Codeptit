//https://code.ptit.edu.vn/student/question/DSA07023
//ĐẢO TỪ

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        stack<string> st;
        string s;
        getline(cin, s);
        stringstream ss(s);
        string word;
        while (ss >> word) {
            st.push(word);
        }
        while (!st.empty()) {
            cout << st.top() << " ";
            st.pop();
        }
        cout << endl;
    }
    return 0;
}