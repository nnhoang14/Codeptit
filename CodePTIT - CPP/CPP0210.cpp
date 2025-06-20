//https://code.ptit.edu.vn/student/question/CPP0210
//HIỆU LỚN NHẤT CỦA CẶP PHẦN TỬ ĐÚNG THỨ TỰ

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int test;
    cin >> test;
    while (test--)
    {
        int n, max = -1;
        cin>>n;
        vector<int> a(n);
        for(int i = 0 ; i < n; i++)cin >> a[i];
        for(int i = 0 ; i < n; i++){
            for(int j = i + 1 ; j < n; j++){
                int res = a[j] - a[i];
                if(res >= max) max = res;
            }
        }
        cout << max << endl;
    }
    return 0;
}