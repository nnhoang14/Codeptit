//https://code.ptit.edu.vn/student/question/CPP0273
//ĐIỂM CÂN BẰNG

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(){
    int test;
    cin >> test;
    while (test--)
    {
        int n, pos = -1, sum = 0, tmp = 0 ;
        cin >> n;
        vector<int> a(n);
        vector<int> l(n);
        vector<int> r(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
            sum += a[i];
            l[i] = sum;
            }
        for(int i = n - 1; i >=0 ; i --){
            tmp += a[i];
            r[i] = tmp;
        }
        for(int i = 0; i < n; i++){
            if(l[i]==r[i]){
                pos = i + 1;
                break;
            }
        }
        cout << pos <<endl;
    }
    return 0;
}