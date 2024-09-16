//https://code.ptit.edu.vn/student/question/CPP0413
//SẮP XẾP XEN KẼ - 1

#include <bits/stdc++.h>
using namespace std;

void downcase(string &s){
    for(int i = 0; i < s.size(); i++){
        s[i] = tolower(s[i]);
    }
}

int main() {
    int test;
    cin>>test;
    while (test--)
    {
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i = 0; i < n; i++)cin>>a[i];
        sort(a.begin(),a.end());
        int l = 0, r = n-1, pt = 0;
        while (r>=l)
        {
            if(pt % 2 == 0)cout << a[r--] << " ";
            else cout << a[l++] << " ";
            pt++;
        }
        cout<<endl;
    }
    return 0;
}