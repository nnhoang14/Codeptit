//https://code.ptit.edu.vn/student/question/DSA06035
//DÃY TAM GIÁC DÀI NHẤT

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int checkRoot(const vector<int>& a, int i) {
    if ((i == 0 && a[i] > a[i + 1]) || (i == a.size() - 1 && a[i] > a[i - 1])) return 1;
    return (a[i] > a[i - 1] && a[i] > a[i + 1]) ? 1 : 0;
}

int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(auto &x : a) cin >> x;
        int max_len = 1;
        for (int i = 0; i < n; i++){
            if (checkRoot(a, i)) {
                int l = i, r = i;
                while (l > 0 && a[l] > a[l - 1]) l--;
                while (r < n - 1 && a[r] > a[r + 1]) r++;
                max_len = max(max_len, r - l + 1);
            }
        }
        cout << max_len << endl;
    }
    return 0;
} 