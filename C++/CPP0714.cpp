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
        vector<string> n(num);
        for(int i = 0; i < num; i++)cin >> n[i];
        prev_permutation(n.begin(),n.end());
        for(int i = 0; i < num; i++)cout << n[i] << " ";
        cout << endl;
    }
	return 0;
}