#include <stdio.h>
#include <math.h>

int main()
{
    int a,sd,sc;
    scanf("%d",&a);
    sc=a%10;
    float tg=a;
    while(tg>0){
        tg=tg/10;
        if(tg<1)break;
    }
    sd=tg*10;
    printf("%d %d",sd,sc);
    return 0;
}
