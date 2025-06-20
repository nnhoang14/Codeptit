//https://code.ptit.edu.vn/student/question/CPP0527
//SẮP XẾP THỜI GIAN

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

struct Time{
    int h,m,s;
};

void nhap(Time &x){
    cin >> x.h >> x.m >> x.s;
}

bool cmp(Time a, Time b){
    if (a.h != b.h) return a.h < b.h;
    if (a.m != b.m) return a.m < b.m;
    return a.s < b.s;
}

void sapxep(Time group[], int n){
    sort(group,group + n, cmp);
}

void in(Time group[], int n){
    for(int i = 0; i < n; i++){
        cout << group[i].h << " " << group[i].m << " " << group[i].s << endl;
    }
}

int main(){
    int n;
    cin >> n;
    Time group[n];
    for(auto &x : group)nhap(x);
    sapxep(group, n);
    in(group, n);
    return 0;
}