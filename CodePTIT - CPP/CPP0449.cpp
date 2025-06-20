//https://code.ptit.edu.vn/student/question/CPP0449
//KHOẢNG CÁCH BẰNG X

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int check(vector<int> a, int n, int x){
    sort(a.begin(),a.end());
    for(int i = 0; i < n - 1; i++){
        int res = x + a[i];
        if(binary_search(a.begin(),a.end(), res)) return 1;
    }
    return -1;
}

int main(){
    int test;
    cin >> test;
    while (test -- )
    {
        int n, x;
        cin >> n >> x;
        vector<int> a(n);
        for(int i = 0; i < n; i++)cin >> a[i];
        cout << check(a,n,x) << endl;
    }
    
    return 0;
}