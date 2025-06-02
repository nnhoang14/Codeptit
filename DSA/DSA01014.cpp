//https://code.ptit.edu.vn/student/question/DSA01014
//TẬP HỢP

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k, s;
    while (cin >> n >> k >> s) {
        if(!n && !k && !s) break;
        vector<int> bitmask(n, 0);
        for(int i = 0; i < k; ++i)
            bitmask[i] = 1;
        int cnt = 0;
        do {
            int sum = 0;
            for(int i = 0; i < n; ++i) {
                if(bitmask[i])  sum += i + 1;
            }
            if(sum == s) cnt++;
        } while(prev_permutation(bitmask.begin(), bitmask.end()));
        cout << cnt << endl;
    }
    return 0;
}
