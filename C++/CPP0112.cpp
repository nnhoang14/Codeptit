#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int test;
    cin>>test;
    while (test--)
    {
        double x1,y1,x2,y2,xs,ys;
        cin>>x1>>y1>>x2>>y2;
        xs=pow(x1-x2,2);
        ys=pow(y1-y2,2);
        cout<<setprecision(4)<<fixed<<sqrt(xs+ys)<<endl;
    }
    return 0;
}