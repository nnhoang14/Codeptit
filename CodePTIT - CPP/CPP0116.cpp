//https://code.ptit.edu.vn/student/question/CPP0116
//ƯỚC SỐ NGUYÊN TỐ NHỎ NHẤT

#include <bits/stdc++.h>
using namespace std;

void addPrimes(vector<int> &p, int n){
    p[0] = 1;
    for(int i = 1; i < n; i++){
        int r = i + 1;
        if(p[i]==0){
            p[i] = r;
            for(int j = r * 2; j <= n; j += r){
                if(p[j - 1] == 0)p[j - 1] = r;
            }
        }
    }
}

int main(){
    int test;
    cin >> test;
    while (test--)
    {
        int n;
        cin >> n;
        vector<int> Primes(n,0);
        addPrimes(Primes,n);
        for(auto x : Primes)
            cout << x << " ";
        cout << endl;
    }
    return 0;
}