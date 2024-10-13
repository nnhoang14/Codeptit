//https://code.ptit.edu.vn/student/question/CPP0222
//ĐẾM PHẦN TỬ GIỐNG NHAU

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int check(vector<vector<int>> a, int n, int fd){
    int count = 0;
    for(int i = 0; i < n ; i++){
         for(int j = 0; j < n ; j++){
            if(a[i][j] == fd){
                count ++;
                break;
            }
        }
    }
    if(count == n) return 1;
    return 0;
}

int main(){
    int test;
    cin >> test;
    while (test--)
    {
        int n, count = 0;
        cin >> n ;
        vector<vector<int>> a(n,vector<int>(n));
        map<int, int> freq;
        for(int i = 0; i < n ; i++){
            for(int j = 0; j < n ; j++){
                cin >> a[i][j];
                freq[a[i][j]]++;
            }
        }
        for(auto &entry : freq){
            if(entry.second >= n){
                if(check(a,n,entry.first))count ++;
            }
        }
        cout << count << endl;
    }
    return 0;
}