#include <stdio.h>
#include <math.h>

int main()
{
    int a,b,ma[100],mb[100],tt,cl;
    scanf("%d%d",&a,&b);
    for (int i=0;i<a;i++){
        scanf("%d",&ma[i]);
    }
    for (int i=0;i<b;i++){
        scanf("%d",&mb[i]);
    }
    scanf("%d",&tt);
    if(a-tt>b)cl=a-tt-b;
    else cl=b-(a-tt);
    for (int i=0;i<a+cl;i++){
        if(i>=tt){
            int tg;
            tg=ma[i];
            ma[i]=mb[i-tt];
            mb[i-tt]=tg;
        }
    }
    for (int i=0;i<a+b;i++){
        if(i>=a+cl){
            ma[i]=mb[i-a-cl];
            printf("%d ",ma[i]);
        }
        else printf("%d ",ma[i]);
    } 
    return 0;
}
