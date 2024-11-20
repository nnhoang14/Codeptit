//https://code.ptit.edu.vn/student/question/CPP0454
//TAM GIÁC VUÔNG

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll ch(ll a, ll b){
    ll sum = a * a + b * b;
    ll res = sqrt(sum);
    if(res * res == sum) return res;
    return 0;
}

int check(ll a[], int n){
    sort(a,a+n);
    for(int i = 0; i < n - 2; i++){
        for(int j = i + 1; j < n - 1; j++){
            ll res = ch(a[i],a[j]);
            if(res != 0 && binary_search(a + j + 1,a + n,res)) return 1;
        }
    }
    return 0;
}

int main(){
    int test;
    cin >> test;
    while (test -- )
    {
        int n;
        cin >> n;
        ll a[n];
        for(int i = 0; i < n; i++)cin >> a[i];
        if(check(a,n)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
    return 0;
}