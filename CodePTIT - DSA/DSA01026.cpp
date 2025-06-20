//https://code.ptit.edu.vn/student/question/DSA01026
//PHÁT LỘC

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int check(vector<int> a){
    int n = a.size();
    for (int i = 1; i < n - 1; i++){
        if (a[i] == 8 && a[i + 1] == 8) return 0;
        if (a[i] == 6 && a[i + 1] == 6 && a[i + 2] == 6 && a[i + 3] == 6) return 0;
    }
    return 1;
}

int main(){
    int n;
    cin >> n;
    vector<int> a(n, 6);
    a[0] = 8;
    while (true){
        if(check(a)){
            for(auto x : a) cout << x;
            cout << endl;
        }
        int i = n - 2;
        while (i >= 2 && a[i] == 8) {
            a[i] = 6;
            i--;
        }
        if (i >= 2) a[i] = 8;
        else break;
    }
    return 0;
}