//https://code.ptit.edu.vn/student/question/DSA07025
//HẬU TỐ

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int t;
    cin >> t;
    while (t--) {
      ll n;
      cin >> n;
      vector<string> a(n);
      for(auto &x : a) cin >> x;
      stack<ll> st;
      for(auto x : a){
        if(isdigit(x[0]) || x.size() > 1) st.push(stoi(x));
        else {
          ll a = st.top(); st.pop();
          ll b = st.top(); st.pop();
          if(x == "+") st.push(a + b);
          else if(x == "-") st.push(b - a);
          else if(x == "*") st.push(a * b);
          else if(x == "/") st.push(b / a);
        }
      }
      cout << st.top() << endl;
    }
    return 0;
}