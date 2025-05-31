//https://code.ptit.edu.vn/student/question/DSA07031
//TIỀN TỐ

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
      for(int i = n - 1; i >= 0; i--) {
        if(isdigit(a[i][0]) || a[i].size() > 1) st.push(stoi(a[i]));
        else {
          ll b = st.top(); st.pop();
          ll c = st.top(); st.pop();
          if(a[i] == "+") st.push(c + b);
          else if(a[i] == "-") st.push(b - c);
          else if(a[i] == "*") st.push(c * b);
          else if(a[i] == "/") st.push(b / c);
        }
      }
      cout << st.top() << endl;
    }
    return 0;
}