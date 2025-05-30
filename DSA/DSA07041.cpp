//https://code.ptit.edu.vn/student/question/DSA07041
//BIỂU THỨC ĐÚNG DÀI NHẤT

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int t;
    cin >> t;
    cin.ignore();
    while (t--){
        string s;
        getline(cin, s);
        stack<char> st;
        st.push(-1);
        int res = 0;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '(') st.push(s[i]);
            else{
                if(!st.empty() && st.top() == '(') {
                    st.pop();
                    if(!st.empty()) res += 2;
                }
            }
        }
        cout << res << endl;
    }    
    return 0;
}