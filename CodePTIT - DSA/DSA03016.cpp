//https://code.ptit.edu.vn/student/question/DSA03016
//SỐ NHỎ NHẤT

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int t;
    cin >> t;
    while (t--){
        int s, d;
        cin >> s >> d;
        if(s > d * 9){
            cout << "-1" << endl;
            continue;
        }
        int num[d];
        for(int i = 0; i < d; i++){
            int st = (!i) ? 1 : 0;
            for(int j = st; j <= 9; j++)
                if(s - j <= (d - i - 1)* 9){
                    num[i] = j;
                    s -= j;
                    break;
                }
            }
        for (int x : num) cout << x;
        cout << endl;
    }
    return 0;
}