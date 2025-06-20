//https://code.ptit.edu.vn/student/question/CPP0213
//KIỂM TRA DÃY FIBONACCI

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int checkFibo(int n){
    if(n == 0)return 1;
    int f0 = 0, f1 = 1, f2 = 0;
    while (f2 < n)
    {
        f2 = f0 + f1;
        f0 = f1;
        f1 = f2;
    }
    if(f2 == n)return 1;
    return 0;
}

int main(){
    int test;
    cin >> test;
    const int max = 1e9 + 7; 
    while (test--)
    {
        int n;
        cin>> n;
        vector<int> a(n);
        for(int i = 0; i < n ; i++){
            cin >> a[i];
            if(checkFibo(a[i]))cout << a[i] << " ";
            }
        cout << endl;
    }
    return 0;
}