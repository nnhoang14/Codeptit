#include <stdio.h>
#include <math.h>

int main()
{
    int a,b[100];
    scanf("%d",&a);
    for (int i=0;i<a;i++){
        scanf("%d",&b[i]);
    }
    for (int i=0;i<a;i++){
        if(i==(a-1-i))break;
        else{
            if(i==a/2)break;
            else{
                int tg;
                tg=b[i];
                b[i]=b[a-1-i];
                b[a-1-i]=tg;
            }
        }
    }
    for (int i=0;i<a;i++){
        printf("%d ",b[i]);
    }
    return 0;
}
