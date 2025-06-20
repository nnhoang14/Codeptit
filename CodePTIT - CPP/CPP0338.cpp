//https://code.ptit.edu.vn/student/question/CPP0429
//SỬA ĐÈN

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	int n, k, b;
    cin >> n >> k >> b;
    vector<int> ds(n,1);
    for(int i = 0; i < b; i++){
        int tmp;
        cin >> tmp;
        ds[tmp - 1] = 0;
    }
    int broken = 0;
    for(int i = 0; i < k; i++){
        if(ds[i] == 0)broken ++;
    }
    int fix = broken;
    for(int i = k; i < n; i++){
        if(ds[i] == 0)broken ++;
        if(ds[i - k] == 0)broken --;
        fix = min(fix, broken);
    }
    cout << fix;
	return 0;
}