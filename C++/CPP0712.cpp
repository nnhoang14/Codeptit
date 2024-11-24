#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void ktao(int n, int k, int a[]){
    for(int i = 1; i <= k; i++){
        a[i] = i;
    }
}

void sinh(int n, int k, int a[],int &ok){
    int i = k;
    while (i >= 1 && a[i] == n - k + i){
        i--;
    }
    if(i == 0) ok = 0;
    else {
        a[i] ++;
        for(int j = i + 1; j <= k; j++)
            a[j] = a[j - 1] + 1;
    }
}

int main(){
    int test;
    cin >> test;
    while (test --)
    {
        int n, k, ok = 1;
        cin >> n >> k;
        int a[10000];
        ktao(n,k,a);
        while (ok){
            for(int i = 1; i <= k; i++)
                cout << a[i];
            cout << " ";
            sinh(n,k,a,ok);
        }
        cout << endl;
    }
    return 0;
}