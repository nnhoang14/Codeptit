//https://code.ptit.edu.vn/student/question/CPP0501
//CẤU TRÚC ĐIỂM

#include <bits/stdc++.h>
using namespace std;

typedef struct Point{
    double x, y;
} pt;

void input(pt &d){
    cin>>d.x>>d.y;
}

double distance(pt &d1, pt &d2){
     return sqrt((d1.x - d2.x) * (d1.x - d2.x) + (d1.y - d2.y) * (d1.y - d2.y));
}

int main(){
    struct Point A, B;
    int t;
    cin>>t;
    while(t--){
        input(A); input(B);
        cout << fixed << setprecision(4) << distance(A,B) << endl;
    }
    return 0;
}