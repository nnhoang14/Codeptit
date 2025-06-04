//https://code.ptit.edu.vn/student/question/DSA11005
//DUYỆT CÂY 2

#include <bits/stdc++.h>
using namespace std;

int search(vector<int> in, int x) {
    for (int i = 0; i < in.size(); i++)
        if (in[i] == x)
            return i;
    return -1;
}

void postOrder(vector<int> in, vector<int> lev){
    if(in.empty()) return;
    int root = search(in, lev[0]);

    vector<int> left_in(in.begin(), in.begin() + root);
    vector<int> right_in(in.begin() + root + 1, in.end());

    vector<int> left_lev(in.begin(), in.begin() + root);
    vector<int> right_lev(in.begin() + root + 1, in.end());

    sort(left_lev.begin(), left_lev.end());
    sort(right_lev.begin(), right_lev.end());

    postOrder(left_in, left_lev);
    postOrder(right_in, right_lev);
    
    cout << lev[0] << " ";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> in(n), lev(n);
        for (auto &x : in) cin >> x;
        for (auto &x : lev) cin >> x;
        postOrder(in, lev);
        cout << endl;
    }
    return 0;
}