//https://code.ptit.edu.vn/student/question/DSA07021
//DÃY NGOẶC ĐÚNG DÀI NHẤT

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
        stack<int> st;
        st.push(-1);
        int res = 0;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '(') st.push(i);
            else{
                st.pop();
                if(!st.empty())res = max(res, i - st.top());
                else st.push(i);
            } 
        }
        cout << res << endl;
    }    
    return 0;
}