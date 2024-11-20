//https://code.ptit.edu.vn/student/question/CPP0427
//NHÂN ĐÔI CẶP SỐ BẰNG NHAU
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int test;
    cin>>test;
    while (test--)
    {
        int n, cnt = 0;
        cin >> n; 
        vector<ll> a(n);
        vector<ll> res(n,0);
        for(int i = 0; i < n; i++)cin >> a[i];
        for(int i = 0; i < n; i++){
            if(a[i] != 0){
                if(a[i] == a[i + 1]){
                    res[cnt] = a[i] * 2;
                    a[i + 1] = 0;
                    }
                else res[cnt] = a[i];
                cnt ++;
            }
        }
        for(int i = 0; i < n; i++)cout << res[i] << " ";
        cout << endl;
    }
    return 0;
}