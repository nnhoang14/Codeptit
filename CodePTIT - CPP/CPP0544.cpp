//https://code.ptit.edu.vn/student/question/CPP0544
//DIỆN TÍCH HÌNH TRÒN NGOẠI TIẾP TAM GIÁC

#include <bits/stdc++.h>
using namespace std;
#define PI 3.141592653589793238

struct Diem{
    double x, y;
};

void nhap(Diem &a){
    cin >> a.x >> a.y;
}

bool check(Diem a, Diem b, Diem c){
    return (a.x - b.x) * (a.y - c.y) != (a.x - c.x) * (a.y - b.y); 
}

double Dodai(Diem a, Diem b) { 
    return sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y)); 
}

double sdtnt(Diem a, Diem b, Diem c){
    double ab = Dodai(a,b);
    double bc = Dodai(b,c);
    double ca = Dodai(c,a);
    double s = (ab + bc + ca) / 2;
    double area = sqrt(s * (s - ab) * (s - bc) * (s - ca));
    double r = (ab * bc * ca) / (4 * area);
    double res = r*r*PI;
    return res;
}

int main(){
    int test;
    cin >> test; 
    while (test--)
    {
        Diem a,b,c;
        nhap(a);
        nhap(b);
        nhap(c);
        if(check(a,b,c)) cout << fixed << setprecision(3) << sdtnt(a,b,c) << endl;
        else cout << "INVALID" << endl;
    }
    return 0;
}