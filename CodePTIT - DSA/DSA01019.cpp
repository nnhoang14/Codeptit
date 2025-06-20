//https://code.ptit.edu.vn/student/question/DSA01019
//HAHAHA

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int check(vector<char> a){
    int n = a.size();
    for (int i = 2; i < n - 1; i++){
        if (a[i] == 'H' && a[i + 1] == 'H') return 0;
    }
    return 1;
}

int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        vector<char> a(n, 'A');
        a[0] = 'H';
        while (true){
            if(check(a)){
                for(auto x : a) cout << x;
                cout << endl;
            }
            int i = n - 2;
            while (i >= 2 && a[i] == 'H') {
                a[i] = 'A';
                i--;
            }
            if (i >= 2) a[i] = 'H';
            else break;
        }
    }
    return 0;
}