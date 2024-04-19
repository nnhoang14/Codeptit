#include <stdio.h>
#include <math.h>

int main()
{
    int a,b,max;
    scanf("%d%d",&a,&b);
    if(a>b)max=a;
    else max=b;
    for(int i=0;i<a;i++){
        int d=0;
        for(int j=0;j<b;j++){
            int ht=max-(i+j);
            if(ht>0)printf("%d",ht);
            else {
                d++;
                printf("%d",ht+d*2);
            }
        }
        printf("\n");
    }
    return 0;
}
