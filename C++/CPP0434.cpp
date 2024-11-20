//https://code.ptit.edu.vn/student/question/CPP0434
//BIẾN ĐỔI DÃY SỐ - 2

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void change(vector<int> a, int n){
    vector<int> res(n);
    res[0] = a[0] * a[1];
    res[n - 1] = a[n - 1] * a[n - 2];
    for(int i = 1; i < n - 1; i++)
        res[i] = a[i - 1] * a[i + 1];
    for(int x : res) cout << x <<" ";
}

int main(){
    int test;
    cin >> test;
    while (test -- )
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++)cin >> a[i];
        change(a,n);
        cout << endl;
    }
    
    return 0;
}