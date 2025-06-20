#include <stdio.h>
#include <math.h>

int nt(int a){
    if(a<2)return 0;
    for (int i = 2; i <= sqrt(a); i++)
        if(a%i==0)return 0;
    return 1;
}

int check(int a){
    int tmp=a,n=0,count=0;
    while(a>0){
        n=n*10+a%10;
        a/=10;
        count++;
    }
    int d=count-1;
    while (count--)
    {
        int sc=tmp%10;
        tmp=tmp/10+sc*pow(10,d);
        if(nt(tmp)==0)return 0;
    }
    return 1;
}

int main(){
    int test;
    scanf("%d",&test);
    while (test--){
        int num;
        scanf("%d",&num);
        if(check(num))printf("1 ");
        else printf("0 ");
    }
}