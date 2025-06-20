//https://code.ptit.edu.vn/student/question/DSA06012
//PHẦN TỬ LỚN NHẤT

#include <bits/stdc++.h>
using namespace std;

int main(){
    int tc;
    cin >> tc;
    cin.ignore();
    while (tc--){
        int n, k;
        cin >> n >> k;
        int a[n];
        for(auto &x : a)cin >> x;
        sort(a, a + n);
        for(int i = n - 1; i >= n - k; i--){
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}