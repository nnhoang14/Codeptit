//https://code.ptit.edu.vn/student/question/DSA11003
//DUYỆT CÂY 1

#include <bits/stdc++.h>
using namespace std;

int search(int in[], int x, int n) {
    for (int i = 0; i < n; i++)
        if (in[i] == x)
            return i;
    return -1;
}

void postOrder(int in[], int pre[], int n) {
    int root = search(in, pre[0], n);
    if (root != 0)
        postOrder(in, pre + 1, root);
    if (root != n - 1)
        postOrder(in + root + 1, pre + root + 1, n - root - 1);
    cout << pre[0] << " ";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int in[n], pre[n];
        for(auto &x : in) cin >> x;
        for(auto &x : pre) cin >> x;
        postOrder(in, pre, n);
        cout << endl;
    }
    return 0;
}