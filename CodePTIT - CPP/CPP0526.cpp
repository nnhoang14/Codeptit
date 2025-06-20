//https://code.ptit.edu.vn/student/question/CPP0526
//TRẺ NHẤT – GIÀ NHẤT

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

struct Nguoi{
    string name;
    string date;
};

void nhap(Nguoi &x){
    cin >> ws;
    cin >> x.name >> x.date;
}

bool cmp(Nguoi a, Nguoi b){
    int d1, m1, y1, d2, m2, y2;
    sscanf(a.date.c_str(), "%d/%d/%d", &d1, &m1, &y1);
    sscanf(b.date.c_str(), "%d/%d/%d", &d2, &m2, &y2);
    if (y1 != y2) return y1 < y2;
    if (m1 != m2) return m1 < m2;
    return d1 < d2;
}

void sapxep(Nguoi group[], int n){
    sort(group,group + n, cmp);
}

void in(Nguoi group[], int n){
    cout << group[n - 1].name << endl;
    cout << group[0].name;
}

int main(){
    int n;
    cin >> n;
    Nguoi group[n];
    for(auto &x : group)nhap(x);
    sapxep(group, n);
    in(group, n);
    return 0;
}