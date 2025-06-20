//https://code.ptit.edu.vn/student/question/CPP0453
//NHỎ NHẤT THỨ K

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int test;
    cin >> test;
    while (test -- )
    {
        int n,k;
        cin >> n >> k;
        ll a[n];
        for(int i = 0; i < n; i++)cin >> a[i];
        sort(a,a+n);
        cout << a[k - 1] << endl;
    }
    
    return 0;
}