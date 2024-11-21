//https://code.ptit.edu.vn/student/question/CPP0241
//BIẾN ĐỔI DÃY SỐ

#include <bits/stdc++.h>
using namespace std;

int Merge(int a, int b){
    return a + b;
}

int main(){
    int test;
    cin >> test;
    while (test--){
        int n, cnt = 0;
        cin >> n;
        int a[n];
        for(int &x : a) cin >> x;
        int l = 0, r = n - 1;
        while(l <= r){
            if(a[l] != a[r]){
                if(a[l] < a[r]) {
                    a[l + 1] = Merge(a[l],a[l + 1]);
                    l++;
                    }
                else{
                    a[r - 1] = Merge(a[r],a[r - 1]);
                    r--;
                    }
                cnt ++;
            }
            else {
                l++;
                r--;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}