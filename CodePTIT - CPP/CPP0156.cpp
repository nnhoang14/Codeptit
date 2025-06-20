//https://code.ptit.edu.vn/student/question/CPP0156
//ĐẾM SỐ NGHIỆM CỦA PHƯƠNG TRÌNH ĐỒNG DƯ

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	int test;
    cin >> test;
    while (test--){
        ll b, p, cnt = 0; 
        cin >> b >> p;
        for(ll i = 1; i < p; i++)
            if((i * i) % p == 1){
                ll last = i + p * (b / p);
                if(last > b) last -= p;
                cnt += (last - i) / p + 1;
            }
        cout << cnt << endl;
    }
	return 0;
}