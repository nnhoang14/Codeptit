#include <stdio.h>
#include <math.h>

int ucln(int a,int b){
    for(int i=2;i<=a;i++){
        if(a%i==0&&b%i==0)return 0;
    }
    return 1;
}

int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    for(int i=a;i<=b;i++){
        for(int j=a;j<=b;j++){
            if(ucln(i,j)&&i<j)printf("(%d,%d)\n",i,j);
        }
    }
    return 0;
}
