//https://code.ptit.edu.vn/student/question/DSA04016
//PHẦN TỬ THỨ K

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n, m, k;
        cin >> n >> m >> k;
        vector<int> uni;
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            uni.push_back(x);
        }
        for(int i = 0; i < m; i++){
            int x;
            cin >> x;
            uni.push_back(x);
        }
        sort(uni.begin(),uni.end());
        cout << uni[k - 1] << endl;
    }
    return 0;
}