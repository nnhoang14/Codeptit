//https://code.ptit.edu.vn/student/question/CPP0714
//HOÁN VỊ LIỀN KỀ PHÍA TRƯỚC

#include <bits/stdc++.h>
using namespace std;

int main() {
	int test;
    cin>>test;
    while (test--)
    {
        int num;
        cin >> num;
        int n[num];
        for(auto &x : n)cin >> x;
        int i = num - 2, j = num - 1;
        while(n[i] <= n[j] && i >=0)i--;
        while (n[j] >= n[i])j--;
        swap(n[i],n[j]);
        for(auto &x : n)cout << x << " ";
        cout << endl;
    }
	return 0;
}
